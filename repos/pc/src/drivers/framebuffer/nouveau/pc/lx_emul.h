/**
 * \brief  Dummy definitions of Linux Kernel functions
 * \author Alice Domage
 */

/*
 * Copyright (C) 2023 Genode Labs GmbH
 *
 * This file is distributed under the terms of the GNU General Public License
 * version 2.
 */


/* Needed to trace and stop */
#include <lx_emul/debug.h>

#ifdef __cplusplus
extern "C" {
#endif


/* fix for wait_for_completion_timeout where the __sched include is missing */
#include <linux/sched/debug.h>

struct dma_fence_work;
struct dma_fence_work_ops;

void *emul_alloc_shmem_file_buffer(unsigned long);
void  emul_free_shmem_file_buffer(void *);

void * intel_io_mem_map(unsigned long offset, unsigned long size);

#ifdef __cplusplus
}
#endif

