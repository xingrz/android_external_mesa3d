/*
 * Copyright 2014, 2015 Red Hat.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * on the rights to use, copy, modify, merge, publish, distribute, sub
 * license, and/or sell copies of the Software, and to permit persons to whom
 * the Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHOR(S) AND/OR THEIR SUPPLIERS BE LIABLE FOR ANY CLAIM,
 * DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR
 * OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE
 * USE OR OTHER DEALINGS IN THE SOFTWARE.
 */
#ifndef VIRGL_H
#define VIRGL_H

#include "util/u_transfer.h"

#include "../winsys/virgl/drm/virgl_hw.h"

#include "virgl_winsys.h"
#include "pipe/p_screen.h"
struct virgl_screen {
   struct pipe_screen base;
   struct sw_winsys *winsys;
   struct virgl_winsys *vws;

   struct virgl_drm_caps caps;

   uint32_t sub_ctx_id;
};


static inline struct virgl_screen *
virgl_screen( struct pipe_screen *pipe )
{
   return (struct virgl_screen *)pipe;
}

#define VIRGL_MAP_BUFFER_ALIGNMENT 64

#endif