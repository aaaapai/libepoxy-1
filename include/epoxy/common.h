/*
 * Copyright 2017  Emmanuele Bassi 
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 */

/** @file common.h
 *
 * A common header file, used to define macros and shared symbols.
 */

#ifndef EPOXY_COMMON_H
#define EPOXY_COMMON_H

#ifdef __cplusplus
# define EPOXY_BEGIN_DECLS      extern "C" {
# define EPOXY_END_DECLS        }
#else
# define EPOXY_BEGIN_DECLS
# define EPOXY_END_DECLS
#endif

#ifndef EPOXY_PUBLIC
#  define EPOXY_PUBLIC extern
#endif

# include <stdbool.h>

EPOXY_BEGIN_DECLS

EPOXY_PUBLIC bool epoxy_extension_in_string(const char *extension_list,
                                            const char *ext);

EPOXY_END_DECLS

#endif /* EPOXY_COMMON_H */
