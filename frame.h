/*
 * Copyright (C) 2000, 2001, 2002, 2003, 2004 Shawn Betts <sabetts@vcn.bc.ca>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation; either version 2 of the License, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc., 59 Temple
 * Place, Suite 330, Boston, MA 02111-1307 USA.
 */

#ifndef FRAME_H
#define FRAME_H

void frame_resize_down(rp_frame *frame, int amount);
void frame_resize_up(rp_frame *frame, int amount);
void frame_resize_right(rp_frame *frame, int amount);
void frame_resize_left(rp_frame *frame, int amount);
int frame_height(rp_frame *frame);
int frame_width(rp_frame *frame);
int frame_bottom(rp_frame *frame);
int frame_bottom_screen_edge(rp_frame *frame);
int frame_right(rp_frame *frame);
int frame_right_screen_edge(rp_frame *frame);
int frame_top(rp_frame *frame);
int frame_top_screen_edge(rp_frame *frame);
int frame_left(rp_frame *frame);
int frame_left_screen_edge(rp_frame *frame);
int frame_bottom_abs(rp_frame *frame);
int frame_right_abs(rp_frame *frame);
int frame_top_abs(rp_frame *frame);
int frame_left_abs(rp_frame *frame);

rp_frame *frame_new(rp_vscreen *v);
void frame_free(rp_vscreen *v, rp_frame *f);
rp_frame *frame_copy(rp_frame *frame);
char *frame_dump(rp_frame *frame, rp_vscreen *vscreen);
rp_frame *frame_read(char *str, rp_vscreen *vscreen);

rp_vscreen *frames_vscreen(rp_frame *);

#endif
