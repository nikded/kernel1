/* tui/stui_ioctl.h
 *
 * Samsung TUI HW Handler driver.
 *
 * Copyright (c) 2023 Samsung Electronics Co., Ltd All Rights Reserved
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __STUI_IOCTL_H_
#define __STUI_IOCTL_H_

/* Commands and Structures for TUI */
#define STUI_HW_IOCTL_START_TUI         0x10
#define STUI_HW_IOCTL_FINISH_TUI        0x11
#ifdef SAMSUNG_TUI_TEST
#define STUI_HW_IOCTL_GET_PHYS_ADDR     0x12
#endif //SAMSUNG_TUI_TEST
#define STUI_HW_IOCTL_GET_RESOLUTION    0x13

#define STUI_DISPLAY_INFO_SIZE    10

struct tui_hw_buffer {
	uint32_t width;
	uint32_t height;
	uint64_t fb_physical;
	uint64_t fb_size;
	uint64_t wb_physical;
	uint64_t wb_size;
	uint64_t disp_physical;
	uint64_t disp_size;
	uint32_t touch_type; // for multipanel
	uint64_t lcd_info[STUI_DISPLAY_INFO_SIZE];
	uint32_t disp_if;
} __packed;

#endif /* __STUI_IOCTL_H_ */
