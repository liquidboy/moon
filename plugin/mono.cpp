/*
 * mono.cpp: Support routines to load the Mono VM as a browser plugin.
 *
 * Author:
 *   Miguel de Icaza (miguel@novell.com)
 *
 * Copyright 2007 Novell, Inc. (http://www.novell.com)
 *
 * See the LICENSE file included with the distribution for details.
 * 
 */

#include "moonlight.h"
#include <stdlib.h>
#include <glib.h>
#include "moon-mono.h"

MonoDomain   *moon_domain;
MonoAssembly *moon_boot_assembly;
static char *boot_assembly;

// Methods
MonoMethod   *moon_load_xaml_file;
MonoMethod   *moon_load_xaml_str;
MonoMethod   *moon_try_load;
MonoMethod   *moon_insert_mapping;

static MonoMethod *
vm_get_method_from_name (const char *name)
{
	MonoMethod *method;
	MonoMethodDesc *desc;

	desc = mono_method_desc_new (name, TRUE);
	method = mono_method_desc_search_in_image (desc, mono_assembly_get_image (moon_boot_assembly));
	mono_method_desc_free (desc);

	return method;
}

gboolean
vm_init (void)
{
	gboolean result = FALSE;

	boot_assembly = g_build_path ("/", PLUGIN_DIR, "plugin", "moonlight.exe", NULL);
	printf ("The file is %s\n", boot_assembly);

	mono_config_parse (NULL);
	moon_domain = mono_jit_init_version (boot_assembly, "moonlight");
	mono_debug_init (MONO_DEBUG_FORMAT_MONO);
	mono_debug_init_1 (moon_domain);
	moon_boot_assembly = mono_domain_assembly_open (moon_domain, boot_assembly);
	if (moon_boot_assembly){
		char *argv [2];

		argv [0] = boot_assembly;
		argv [1] = NULL;

		mono_jit_exec (moon_domain, moon_boot_assembly, 1, argv);

		moon_load_xaml_file = vm_get_method_from_name ("Moonlight.Hosting:CreateXamlFileLoader");
		moon_load_xaml_str = vm_get_method_from_name ("Moonlight.Hosting:CreateXamlStrLoader");
		moon_try_load = vm_get_method_from_name ("Moonlight.Loader:TryLoad");
		moon_insert_mapping = vm_get_method_from_name ("Moonlight.Loader:InsertMapping");

		if (moon_load_xaml_file != NULL && moon_try_load != NULL){
			result = TRUE;
		}		
	}
	DEBUGMSG ("Mono Runtime: %s", result ? "OK" : "Failed");
	return result;
}

//
// This instructs the managed code to load the Xaml file,
// the signature will change as we add the extra parameters
// that the plugin uses (instead of just <embed src>)
//
gpointer
vm_xaml_file_loader_new (gpointer plugin, gpointer surface, const char *file)
{
	if (moon_load_xaml_file == NULL)
		return NULL;

	void *params [3];
	params [0] = &plugin;
	params [1] = &surface;
	params [2] = mono_string_new (moon_domain, file);
	return mono_runtime_invoke (moon_load_xaml_file, NULL, params, NULL);
}

gpointer
vm_xaml_str_loader_new (gpointer plugin, gpointer surface, const char *str)
{
	if (moon_load_xaml_str == NULL)
		return NULL;

	void *params [3];
	params [0] = &plugin;
	params [1] = &surface;
	params [2] = mono_string_new (moon_domain, str);
	return mono_runtime_invoke (moon_load_xaml_str, NULL, params, NULL);
}

char *
vm_loader_try (gpointer loader_object, int *error)
{
	if (moon_try_load == NULL)
		return NULL;

	void *params [1];
	params [0] = &error;

	MonoString *ret = (MonoString *) mono_runtime_invoke (moon_try_load, loader_object, params, NULL);
	
	return mono_string_to_utf8 (ret);
}

//
// Inserts the original file request with its mapping into the
// managed loader hashtable  (bin/MyAssembly.dll, ~/.mozilla/tmp/xxx.dll)
//
void
vm_insert_mapping (gpointer loader_object, const char *key, const char *value)
{
	void *params [2];
	params [0] = mono_string_new (moon_domain, key);
	params [1] = mono_string_new (moon_domain, value);

	mono_runtime_invoke (moon_insert_mapping, loader_object, params, NULL);
}
