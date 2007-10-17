/*
 * Copyright (C) 2007 Novell, Inc (http://www.novell.com)
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of this software
 * and associated documentation files (the "Software"), to deal in the Software without restriction,
 * including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all copies or substantial
 * portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT
 * NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE
 * OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 * Authors:
 *          Sebastien Pouliot  <sebastien@ximian.com>
 *          Andrew Jorgensen  <ajorgensen@novell.com>
 */

#ifndef _CAIRO_EMBED_H_
#define _CAIRO_EMBED_H_

/* avoid symbol mixup between applications using libcairo and moonlight embedded cairo library */

#define cairo_append_path				moonlight_cairo_append_path
#define cairo_arc					moonlight_cairo_arc
#define cairo_arc_negative				moonlight_cairo_arc_negative
#define cairo_clip					moonlight_cairo_clip
#define cairo_clip_extents				moonlight_cairo_clip_extents
#define cairo_clip_preserve				moonlight_cairo_clip_preserve
#define cairo_close_path				moonlight_cairo_close_path
#define cairo_copy_clip_rectangle_list			moonlight_cairo_copy_clip_rectangle_list
#define cairo_copy_page					moonlight_cairo_copy_page
#define cairo_copy_path					moonlight_cairo_copy_path
#define cairo_copy_path_flat				moonlight_cairo_copy_path_flat
#define cairo_create					moonlight_cairo_create
#define cairo_curve_to					moonlight_cairo_curve_to
#define cairo_debug_reset_static_data			moonlight_cairo_debug_reset_static_data
#define cairo_destroy					moonlight_cairo_destroy
#define cairo_device_to_user				moonlight_cairo_device_to_user
#define cairo_device_to_user_distance			moonlight_cairo_device_to_user_distance
#define cairo_fill					moonlight_cairo_fill
#define cairo_fill_extents				moonlight_cairo_fill_extents
#define cairo_fill_preserve				moonlight_cairo_fill_preserve
#define cairo_font_extents				moonlight_cairo_font_extents
#define cairo_font_face_destroy				moonlight_cairo_font_face_destroy
#define cairo_font_face_get_reference_count		moonlight_cairo_font_face_get_reference_count
#define cairo_font_face_get_type			moonlight_cairo_font_face_get_type
#define cairo_font_face_get_user_data			moonlight_cairo_font_face_get_user_data
#define cairo_font_face_reference			moonlight_cairo_font_face_reference
#define cairo_font_face_set_user_data			moonlight_cairo_font_face_set_user_data
#define cairo_font_face_status				moonlight_cairo_font_face_status
#define cairo_font_options_copy				moonlight_cairo_font_options_copy
#define cairo_font_options_create			moonlight_cairo_font_options_create
#define cairo_font_options_destroy			moonlight_cairo_font_options_destroy
#define cairo_font_options_equal			moonlight_cairo_font_options_equal
#define cairo_font_options_get_antialias		moonlight_cairo_font_options_get_antialias
#define cairo_font_options_get_hint_metrics		moonlight_cairo_font_options_get_hint_metrics
#define cairo_font_options_get_hint_style		moonlight_cairo_font_options_get_hint_style
#define cairo_font_options_get_subpixel_order		moonlight_cairo_font_options_get_subpixel_order
#define cairo_font_options_hash				moonlight_cairo_font_options_hash
#define cairo_font_options_merge			moonlight_cairo_font_options_merge
#define cairo_font_options_set_antialias		moonlight_cairo_font_options_set_antialias
#define cairo_font_options_set_hint_metrics		moonlight_cairo_font_options_set_hint_metrics
#define cairo_font_options_set_hint_style		moonlight_cairo_font_options_set_hint_style
#define cairo_font_options_set_subpixel_order		moonlight_cairo_font_options_set_subpixel_order
#define cairo_font_options_status			moonlight_cairo_font_options_status
#define cairo_ft_font_face_create_for_ft_face		moonlight_cairo_ft_font_face_create_for_ft_face
#define cairo_ft_font_face_create_for_pattern		moonlight_cairo_ft_font_face_create_for_pattern
#define cairo_ft_font_options_substitute		moonlight_cairo_ft_font_options_substitute
#define cairo_ft_scaled_font_lock_face			moonlight_cairo_ft_scaled_font_lock_face
#define cairo_ft_scaled_font_unlock_face		moonlight_cairo_ft_scaled_font_unlock_face
#define cairo_get_antialias				moonlight_cairo_get_antialias
#define cairo_get_current_point				moonlight_cairo_get_current_point
#define cairo_get_dash					moonlight_cairo_get_dash
#define cairo_get_dash_count				moonlight_cairo_get_dash_count
#define cairo_get_fill_rule				moonlight_cairo_get_fill_rule
#define cairo_get_font_face				moonlight_cairo_get_font_face
#define cairo_get_font_matrix				moonlight_cairo_get_font_matrix
#define cairo_get_font_options				moonlight_cairo_get_font_options
#define cairo_get_group_target				moonlight_cairo_get_group_target
#define cairo_get_line_cap				moonlight_cairo_get_line_cap
#define cairo_get_line_join				moonlight_cairo_get_line_join
#define cairo_get_line_width				moonlight_cairo_get_line_width
#define cairo_get_matrix				moonlight_cairo_get_matrix
#define cairo_get_miter_limit				moonlight_cairo_get_miter_limit
#define cairo_get_operator				moonlight_cairo_get_operator
#define cairo_get_reference_count			moonlight_cairo_get_reference_count
#define cairo_get_scaled_font				moonlight_cairo_get_scaled_font
#define cairo_get_source				moonlight_cairo_get_source
#define cairo_get_target				moonlight_cairo_get_target
#define cairo_get_tolerance				moonlight_cairo_get_tolerance
#define cairo_get_user_data				moonlight_cairo_get_user_data
#define cairo_glyph_extents				moonlight_cairo_glyph_extents
#define cairo_glyph_path				moonlight_cairo_glyph_path
#define cairo_identity_matrix				moonlight_cairo_identity_matrix
#define cairo_image_surface_create			moonlight_cairo_image_surface_create
#define cairo_image_surface_create_for_data		moonlight_cairo_image_surface_create_for_data
#define cairo_image_surface_create_from_png		moonlight_cairo_image_surface_create_from_png
#define cairo_image_surface_create_from_png_stream	moonlight_cairo_image_surface_create_from_png_stream
#define cairo_image_surface_get_data			moonlight_cairo_image_surface_get_data
#define cairo_image_surface_get_format			moonlight_cairo_image_surface_get_format
#define cairo_image_surface_get_height			moonlight_cairo_image_surface_get_height
#define cairo_image_surface_get_stride			moonlight_cairo_image_surface_get_stride
#define cairo_image_surface_get_width			moonlight_cairo_image_surface_get_width
#define cairo_in_fill					moonlight_cairo_in_fill
#define cairo_in_stroke					moonlight_cairo_in_stroke
#define cairo_line_to					moonlight_cairo_line_to
#define cairo_mask					moonlight_cairo_mask
#define cairo_mask_surface				moonlight_cairo_mask_surface
#define cairo_matrix_init				moonlight_cairo_matrix_init
#define cairo_matrix_init_identity			moonlight_cairo_matrix_init_identity
#define cairo_matrix_init_rotate			moonlight_cairo_matrix_init_rotate
#define cairo_matrix_init_scale				moonlight_cairo_matrix_init_scale
#define cairo_matrix_init_translate			moonlight_cairo_matrix_init_translate
#define cairo_matrix_invert				moonlight_cairo_matrix_invert
#define cairo_matrix_multiply				moonlight_cairo_matrix_multiply
#define cairo_matrix_rotate				moonlight_cairo_matrix_rotate
#define cairo_matrix_scale				moonlight_cairo_matrix_scale
#define cairo_matrix_transform_distance			moonlight_cairo_matrix_transform_distance
#define cairo_matrix_transform_point			moonlight_cairo_matrix_transform_point
#define cairo_matrix_translate				moonlight_cairo_matrix_translate
#define cairo_move_to					moonlight_cairo_move_to
#define cairo_new_path					moonlight_cairo_new_path
#define cairo_new_sub_path				moonlight_cairo_new_sub_path
#define cairo_paint					moonlight_cairo_paint
#define cairo_paint_with_alpha				moonlight_cairo_paint_with_alpha
#define cairo_path_destroy				moonlight_cairo_path_destroy
#define cairo_pattern_add_color_stop_rgb		moonlight_cairo_pattern_add_color_stop_rgb
#define cairo_pattern_add_color_stop_rgba		moonlight_cairo_pattern_add_color_stop_rgba
#define cairo_pattern_create_for_surface		moonlight_cairo_pattern_create_for_surface
#define cairo_pattern_create_linear			moonlight_cairo_pattern_create_linear
#define cairo_pattern_create_radial			moonlight_cairo_pattern_create_radial
#define cairo_pattern_create_rgb			moonlight_cairo_pattern_create_rgb
#define cairo_pattern_create_rgba			moonlight_cairo_pattern_create_rgba
#define cairo_pattern_destroy				moonlight_cairo_pattern_destroy
#define cairo_pattern_get_color_stop_count		moonlight_cairo_pattern_get_color_stop_count
#define cairo_pattern_get_color_stop_rgba		moonlight_cairo_pattern_get_color_stop_rgba
#define cairo_pattern_get_extend			moonlight_cairo_pattern_get_extend
#define cairo_pattern_get_filter			moonlight_cairo_pattern_get_filter
#define cairo_pattern_get_linear_points			moonlight_cairo_pattern_get_linear_points
#define cairo_pattern_get_matrix			moonlight_cairo_pattern_get_matrix
#define cairo_pattern_get_radial_circles		moonlight_cairo_pattern_get_radial_circles
#define cairo_pattern_get_reference_count		moonlight_cairo_pattern_get_reference_count
#define cairo_pattern_get_rgba				moonlight_cairo_pattern_get_rgba
#define cairo_pattern_get_surface			moonlight_cairo_pattern_get_surface
#define cairo_pattern_get_type				moonlight_cairo_pattern_get_type
#define cairo_pattern_get_user_data			moonlight_cairo_pattern_get_user_data
#define cairo_pattern_reference				moonlight_cairo_pattern_reference
#define cairo_pattern_set_extend			moonlight_cairo_pattern_set_extend
#define cairo_pattern_set_filter			moonlight_cairo_pattern_set_filter
#define cairo_pattern_set_matrix			moonlight_cairo_pattern_set_matrix
#define cairo_pattern_set_user_data			moonlight_cairo_pattern_set_user_data
#define cairo_pattern_status				moonlight_cairo_pattern_status
#define cairo_pdf_surface_create			moonlight_cairo_pdf_surface_create
#define cairo_pdf_surface_create_for_stream		moonlight_cairo_pdf_surface_create_for_stream
#define cairo_pdf_surface_set_size			moonlight_cairo_pdf_surface_set_size
#define cairo_pop_group					moonlight_cairo_pop_group
#define cairo_pop_group_to_source			moonlight_cairo_pop_group_to_source
#define cairo_ps_surface_create				moonlight_cairo_ps_surface_create
#define cairo_ps_surface_create_for_stream		moonlight_cairo_ps_surface_create_for_stream
#define cairo_ps_surface_dsc_begin_page_setup		moonlight_cairo_ps_surface_dsc_begin_page_setup
#define cairo_ps_surface_dsc_begin_setup		moonlight_cairo_ps_surface_dsc_begin_setup
#define cairo_ps_surface_dsc_comment			moonlight_cairo_ps_surface_dsc_comment
#define cairo_ps_surface_get_eps			moonlight_cairo_ps_surface_get_eps
#define cairo_ps_surface_set_eps			moonlight_cairo_ps_surface_set_eps
#define cairo_ps_surface_set_size			moonlight_cairo_ps_surface_set_size
#define cairo_push_group				moonlight_cairo_push_group
#define cairo_push_group_with_content			moonlight_cairo_push_group_with_content
#define cairo_rectangle					moonlight_cairo_rectangle
#define cairo_rectangle_list_destroy			moonlight_cairo_rectangle_list_destroy
#define cairo_reference					moonlight_cairo_reference
#define cairo_rel_curve_to				moonlight_cairo_rel_curve_to
#define cairo_rel_line_to				moonlight_cairo_rel_line_to
#define cairo_rel_move_to				moonlight_cairo_rel_move_to
#define cairo_reset_clip				moonlight_cairo_reset_clip
#define cairo_restore					moonlight_cairo_restore
#define cairo_rotate					moonlight_cairo_rotate
#define cairo_save					moonlight_cairo_save
#define cairo_scale					moonlight_cairo_scale
#define cairo_scaled_font_create			moonlight_cairo_scaled_font_create
#define cairo_scaled_font_destroy			moonlight_cairo_scaled_font_destroy
#define cairo_scaled_font_extents			moonlight_cairo_scaled_font_extents
#define cairo_scaled_font_get_ctm			moonlight_cairo_scaled_font_get_ctm
#define cairo_scaled_font_get_font_face			moonlight_cairo_scaled_font_get_font_face
#define cairo_scaled_font_get_font_matrix		moonlight_cairo_scaled_font_get_font_matrix
#define cairo_scaled_font_get_font_options		moonlight_cairo_scaled_font_get_font_options
#define cairo_scaled_font_get_reference_count		moonlight_cairo_scaled_font_get_reference_count
#define cairo_scaled_font_get_type			moonlight_cairo_scaled_font_get_type
#define cairo_scaled_font_get_user_data			moonlight_cairo_scaled_font_get_user_data
#define cairo_scaled_font_glyph_extents			moonlight_cairo_scaled_font_glyph_extents
#define cairo_scaled_font_reference			moonlight_cairo_scaled_font_reference
#define cairo_scaled_font_set_user_data			moonlight_cairo_scaled_font_set_user_data
#define cairo_scaled_font_status			moonlight_cairo_scaled_font_status
#define cairo_scaled_font_text_extents			moonlight_cairo_scaled_font_text_extents
#define cairo_select_font_face				moonlight_cairo_select_font_face
#define cairo_set_antialias				moonlight_cairo_set_antialias
#define cairo_set_dash					moonlight_cairo_set_dash
#define cairo_set_fill_rule				moonlight_cairo_set_fill_rule
#define cairo_set_font_face				moonlight_cairo_set_font_face
#define cairo_set_font_matrix				moonlight_cairo_set_font_matrix
#define cairo_set_font_options				moonlight_cairo_set_font_options
#define cairo_set_font_size				moonlight_cairo_set_font_size
#define cairo_set_line_cap				moonlight_cairo_set_line_cap
#define cairo_set_line_join				moonlight_cairo_set_line_join
#define cairo_set_line_width				moonlight_cairo_set_line_width
#define cairo_set_matrix				moonlight_cairo_set_matrix
#define cairo_set_miter_limit				moonlight_cairo_set_miter_limit
#define cairo_set_operator				moonlight_cairo_set_operator
#define cairo_set_scaled_font				moonlight_cairo_set_scaled_font
#define cairo_set_source				moonlight_cairo_set_source
#define cairo_set_source_rgb				moonlight_cairo_set_source_rgb
#define cairo_set_source_rgba				moonlight_cairo_set_source_rgba
#define cairo_set_source_surface			moonlight_cairo_set_source_surface
#define cairo_set_tolerance				moonlight_cairo_set_tolerance
#define cairo_set_user_data				moonlight_cairo_set_user_data
#define cairo_show_glyphs				moonlight_cairo_show_glyphs
#define cairo_show_page					moonlight_cairo_show_page
#define cairo_show_text					moonlight_cairo_show_text
#define cairo_status					moonlight_cairo_status
#define cairo_status_to_string				moonlight_cairo_status_to_string
#define cairo_stroke					moonlight_cairo_stroke
#define cairo_stroke_extents				moonlight_cairo_stroke_extents
#define cairo_stroke_preserve				moonlight_cairo_stroke_preserve
#define cairo_surface_copy_page				moonlight_cairo_surface_copy_page
#define cairo_surface_create_similar			moonlight_cairo_surface_create_similar
#define cairo_surface_destroy				moonlight_cairo_surface_destroy
#define cairo_surface_finish				moonlight_cairo_surface_finish
#define cairo_surface_flush				moonlight_cairo_surface_flush
#define cairo_surface_get_content			moonlight_cairo_surface_get_content
#define cairo_surface_get_device_offset			moonlight_cairo_surface_get_device_offset
#define cairo_surface_get_font_options			moonlight_cairo_surface_get_font_options
#define cairo_surface_get_reference_count		moonlight_cairo_surface_get_reference_count
#define cairo_surface_get_type				moonlight_cairo_surface_get_type
#define cairo_surface_get_user_data			moonlight_cairo_surface_get_user_data
#define cairo_surface_mark_dirty			moonlight_cairo_surface_mark_dirty
#define cairo_surface_mark_dirty_rectangle		moonlight_cairo_surface_mark_dirty_rectangle
#define cairo_surface_reference				moonlight_cairo_surface_reference
#define cairo_surface_set_device_offset			moonlight_cairo_surface_set_device_offset
#define cairo_surface_set_fallback_resolution		moonlight_cairo_surface_set_fallback_resolution
#define cairo_surface_set_user_data			moonlight_cairo_surface_set_user_data
#define cairo_surface_show_page				moonlight_cairo_surface_show_page
#define cairo_surface_status				moonlight_cairo_surface_status
#define cairo_surface_write_to_png			moonlight_cairo_surface_write_to_png
#define cairo_surface_write_to_png_stream		moonlight_cairo_surface_write_to_png_stream
#define cairo_svg_get_versions				moonlight_cairo_svg_get_versions
#define cairo_svg_surface_create			moonlight_cairo_svg_surface_create
#define cairo_svg_surface_create_for_stream		moonlight_cairo_svg_surface_create_for_stream
#define cairo_svg_surface_restrict_to_version		moonlight_cairo_svg_surface_restrict_to_version
#define cairo_svg_version_to_string			moonlight_cairo_svg_version_to_string
#define cairo_text_extents				moonlight_cairo_text_extents
#define cairo_text_path					moonlight_cairo_text_path
#define cairo_transform					moonlight_cairo_transform
#define cairo_translate					moonlight_cairo_translate
#define cairo_user_to_device				moonlight_cairo_user_to_device
#define cairo_user_to_device_distance			moonlight_cairo_user_to_device_distance
#define cairo_version					moonlight_cairo_version
#define cairo_version_string				moonlight_cairo_version_string
#define cairo_xlib_surface_create			moonlight_cairo_xlib_surface_create
#define cairo_xlib_surface_create_for_bitmap		moonlight_cairo_xlib_surface_create_for_bitmap
#define cairo_xlib_surface_create_with_xrender_format	moonlight_cairo_xlib_surface_create_with_xrender_format
#define cairo_xlib_surface_get_depth			moonlight_cairo_xlib_surface_get_depth
#define cairo_xlib_surface_get_display			moonlight_cairo_xlib_surface_get_display
#define cairo_xlib_surface_get_drawable			moonlight_cairo_xlib_surface_get_drawable
#define cairo_xlib_surface_get_height			moonlight_cairo_xlib_surface_get_height
#define cairo_xlib_surface_get_screen			moonlight_cairo_xlib_surface_get_screen
#define cairo_xlib_surface_get_visual			moonlight_cairo_xlib_surface_get_visual
#define cairo_xlib_surface_get_width			moonlight_cairo_xlib_surface_get_width
#define cairo_xlib_surface_set_drawable			moonlight_cairo_xlib_surface_set_drawable
#define cairo_xlib_surface_set_size			moonlight_cairo_xlib_surface_set_size

#define _cairo_ps_test_force_fallbacks			_moonlight_cairo_ps_test_force_fallbacks
#define _cairo_scaled_font_test_set_max_glyphs_cached_per_font	_moonlight_cairo_scaled_font_test_set_max_glyphs_cached_per_font
#define _cairo_xlib_test_disable_render			_moonlight_cairo_xlib_test_disable_render

#endif
