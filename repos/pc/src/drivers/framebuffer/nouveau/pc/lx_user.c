/*
 * \brief  Post kernel activity
 * \author Alice Domage
 * \date   2023-10-20
 */

/*
 * Copyright (C) 2023 Genode Labs GmbH
 *
 * This file is distributed under the terms of the GNU General Public License
 * version 2.
 */

#include <linux/fb.h> /* struct fb_info */
#include <linux/sched/task.h>

#include "lx_emul.h"

       struct task_struct    * lx_user_task = NULL;
//static struct drm_client_dev * dev_client   = NULL;

static int configure_connectors(void * data)
{
	while (true) {
			lx_emul_task_schedule(true /* block task */);
	}

	return 0;
}

void lx_user_init(void)
{
	int pid = kernel_thread(configure_connectors, NULL, CLONE_FS | CLONE_FILES);
	lx_user_task = find_task_by_pid_ns(pid, NULL);;
}
