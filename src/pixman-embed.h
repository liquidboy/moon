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

#ifndef _PIXMAN_EMBED_H_
#define _PIXMAN_EMBED_H_

/* avoid symbol mixup between applications using libpixman and moonlight embedded cairo library */

#define color_to_pixel				moonlight_color_to_pixel
#define fbComposeSetupMMX			moonlight_fbComposeSetupMMX
#define fbCompositeCopyAreammx			moonlight_fbCompositeCopyAreammx
#define fbCompositeIn_8x8mmx			moonlight_fbCompositeIn_8x8mmx
#define fbCompositeIn_nx8x8mmx			moonlight_fbCompositeIn_nx8x8mmx
#define fbCompositeOver_x888x8x8888mmx		moonlight_fbCompositeOver_x888x8x8888mmx
#define fbCompositeSolidFill			moonlight_fbCompositeSolidFill
#define fbCompositeSolidMaskSrc_nx8x8888mmx	moonlight_fbCompositeSolidMaskSrc_nx8x8888mmx
#define fbCompositeSolidMask_nx1xn		moonlight_fbCompositeSolidMask_nx1xn
#define fbCompositeSolidMask_nx8888x0565C	moonlight_fbCompositeSolidMask_nx8888x0565C
#define fbCompositeSolidMask_nx8888x0565Cmmx	moonlight_fbCompositeSolidMask_nx8888x0565Cmmx
#define fbCompositeSolidMask_nx8888x8888C	moonlight_fbCompositeSolidMask_nx8888x8888C
#define fbCompositeSolidMask_nx8888x8888Cmmx	moonlight_fbCompositeSolidMask_nx8888x8888Cmmx
#define fbCompositeSolidMask_nx8x0565		moonlight_fbCompositeSolidMask_nx8x0565
#define fbCompositeSolidMask_nx8x0565mmx	moonlight_fbCompositeSolidMask_nx8x0565mmx
#define fbCompositeSolidMask_nx8x0888		moonlight_fbCompositeSolidMask_nx8x0888
#define fbCompositeSolidMask_nx8x8888		moonlight_fbCompositeSolidMask_nx8x8888
#define fbCompositeSolidMask_nx8x8888mmx	moonlight_fbCompositeSolidMask_nx8x8888mmx
#define fbCompositeSolid_nx0565mmx		moonlight_fbCompositeSolid_nx0565mmx
#define fbCompositeSolid_nx8888mmx		moonlight_fbCompositeSolid_nx8888mmx
#define fbCompositeSrcAdd_1000x1000		moonlight_fbCompositeSrcAdd_1000x1000
#define fbCompositeSrcAdd_8000x8000		moonlight_fbCompositeSrcAdd_8000x8000
#define fbCompositeSrcAdd_8000x8000mmx		moonlight_fbCompositeSrcAdd_8000x8000mmx
#define fbCompositeSrcAdd_8888x8888		moonlight_fbCompositeSrcAdd_8888x8888
#define fbCompositeSrcAdd_8888x8888mmx		moonlight_fbCompositeSrcAdd_8888x8888mmx
#define fbCompositeSrcAdd_8888x8x8mmx		moonlight_fbCompositeSrcAdd_8888x8x8mmx
#define fbCompositeSrc_8888RevNPx0565mmx	moonlight_fbCompositeSrc_8888RevNPx0565mmx
#define fbCompositeSrc_8888RevNPx8888mmx	moonlight_fbCompositeSrc_8888RevNPx8888mmx
#define fbCompositeSrc_8888x0565		moonlight_fbCompositeSrc_8888x0565
#define fbCompositeSrc_8888x0565mmx		moonlight_fbCompositeSrc_8888x0565mmx
#define fbCompositeSrc_8888x0888		moonlight_fbCompositeSrc_8888x0888
#define fbCompositeSrc_8888x8888		moonlight_fbCompositeSrc_8888x8888
#define fbCompositeSrc_8888x8888mmx		moonlight_fbCompositeSrc_8888x8888mmx
#define fbCompositeSrc_8888x8x8888mmx		moonlight_fbCompositeSrc_8888x8x8888mmx
#define fbCompositeSrc_x888xnx8888mmx		moonlight_fbCompositeSrc_x888xnx8888mmx
#define fbIn					moonlight_fbIn
#define fbOver					moonlight_fbOver
#define fbOver24				moonlight_fbOver24
#define pixman_add_trapezoids			moonlight_pixman_add_trapezoids
#define pixman_add_traps			moonlight_pixman_add_traps
#define pixman_blt				moonlight_pixman_blt
#define pixman_blt_mmx				moonlight_pixman_blt_mmx
#define pixman_composite_rect_general		moonlight_pixman_composite_rect_general
#define pixman_composite_rect_general_accessors	moonlight_pixman_composite_rect_general_accessors
#define pixman_compute_composite_region		moonlight_pixman_compute_composite_region
#define pixman_edge_init			moonlight_pixman_edge_init
#define pixman_edge_step			moonlight_pixman_edge_step
#define pixman_fill				moonlight_pixman_fill
#define pixman_fill_mmx				moonlight_pixman_fill_mmx
#define pixman_image_composite			moonlight_pixman_image_composite
#define pixman_image_create_bits		moonlight_pixman_image_create_bits
#define pixman_image_create_conical_gradient	moonlight_pixman_image_create_conical_gradient
#define pixman_image_create_linear_gradient	moonlight_pixman_image_create_linear_gradient
#define pixman_image_create_radial_gradient	moonlight_pixman_image_create_radial_gradient
#define pixman_image_create_solid_fill		moonlight_pixman_image_create_solid_fill
#define pixman_image_fill_rectangles		moonlight_pixman_image_fill_rectangles
#define pixman_image_get_data			moonlight_pixman_image_get_data
#define pixman_image_get_depth			moonlight_pixman_image_get_depth
#define pixman_image_get_height			moonlight_pixman_image_get_height
#define pixman_image_get_stride			moonlight_pixman_image_get_stride
#define pixman_image_get_width			moonlight_pixman_image_get_width
#define pixman_image_ref			moonlight_pixman_image_ref
#define pixman_image_set_accessors		moonlight_pixman_image_set_accessors
#define pixman_image_set_alpha_map		moonlight_pixman_image_set_alpha_map
#define pixman_image_set_clip_region		moonlight_pixman_image_set_clip_region
#define pixman_image_set_component_alpha	moonlight_pixman_image_set_component_alpha
#define pixman_image_set_filter			moonlight_pixman_image_set_filter
#define pixman_image_set_has_client_clip	moonlight_pixman_image_set_has_client_clip
#define pixman_image_set_indexed		moonlight_pixman_image_set_indexed
#define pixman_image_set_repeat			moonlight_pixman_image_set_repeat
#define pixman_image_set_source_clipping	moonlight_pixman_image_set_source_clipping
#define pixman_image_set_transform		moonlight_pixman_image_set_transform
#define pixman_image_unref			moonlight_pixman_image_unref
#define pixman_line_fixed_edge_init		moonlight_pixman_line_fixed_edge_init
#define pixman_malloc_ab			moonlight_pixman_malloc_ab
#define pixman_malloc_abc			moonlight_pixman_malloc_abc
#define pixman_rasterize_edges			moonlight_pixman_rasterize_edges
#define pixman_rasterize_edges_accessors	moonlight_pixman_rasterize_edges_accessors
#define pixman_rasterize_trapezoid		moonlight_pixman_rasterize_trapezoid
#define pixman_region16_print			moonlight_pixman_region16_print
#define pixman_region_append			moonlight_pixman_region_append
#define pixman_region_contains_point		moonlight_pixman_region_contains_point
#define pixman_region_contains_rectangle	moonlight_pixman_region_contains_rectangle
#define pixman_region_copy			moonlight_pixman_region_copy
#define pixman_region_empty			moonlight_pixman_region_empty
#define pixman_region_equal			moonlight_pixman_region_equal
#define pixman_region_extents			moonlight_pixman_region_extents
#define pixman_region_fini			moonlight_pixman_region_fini
#define pixman_region_init			moonlight_pixman_region_init
#define pixman_region_init_rect			moonlight_pixman_region_init_rect
#define pixman_region_init_rects		moonlight_pixman_region_init_rects
#define pixman_region_init_with_extents		moonlight_pixman_region_init_with_extents
#define pixman_region_intersect			moonlight_pixman_region_intersect
#define pixman_region_inverse			moonlight_pixman_region_inverse
#define pixman_region_n_rects			moonlight_pixman_region_n_rects
#define pixman_region_not_empty			moonlight_pixman_region_not_empty
#define pixman_region_rectangles		moonlight_pixman_region_rectangles
#define pixman_region_rects			moonlight_pixman_region_rects
#define pixman_region_reset			moonlight_pixman_region_reset
#define pixman_region_selfcheck			moonlight_pixman_region_selfcheck
#define pixman_region_set_static_pointers	moonlight_pixman_region_set_static_pointers
#define pixman_region_subtract			moonlight_pixman_region_subtract
#define pixman_region_translate			moonlight_pixman_region_translate
#define pixman_region_union			moonlight_pixman_region_union
#define pixman_region_union_rect		moonlight_pixman_region_union_rect
#define pixman_region_validate			moonlight_pixman_region_validate
#define pixman_sample_ceil_y			moonlight_pixman_sample_ceil_y
#define pixman_sample_floor_y			moonlight_pixman_sample_floor_y
#define pixman_timer_register			moonlight_pixman_timer_register
#define pixman_transform_point_3d		moonlight_pixman_transform_point_3d

#define pixman_composeFunctions			moonlight_pixman_composeFunctions

#endif
