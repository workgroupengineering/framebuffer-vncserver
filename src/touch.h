#pragma once

int init_touch(const char *touch_device, int vnc_rotate);
void cleanup_touch();
void injectTouchEvent(int down, int x, int y, struct fb_var_screeninfo* scrinfo);

