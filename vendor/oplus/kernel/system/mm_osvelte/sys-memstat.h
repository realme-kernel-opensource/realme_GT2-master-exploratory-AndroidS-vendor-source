/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (C) 2018-2021 Oplus. All rights reserved.
 */
#ifndef _OSVELTE_SYS_MEMSTAT_H
#define _OSVELTE_SYS_MEMSTAT_H

#include <linux/vmstat.h>
#include <linux/mm.h>
#include <linux/mmzone.h>
#include <linux/vmalloc.h>

#if IS_ENABLED(CONFIG_QCOM_KGSL)
#include "kgsl.h"
#include "kgsl_device.h"
extern int read_each_kgsl_process_private(int (*callback)(const struct kgsl_process_private *kp,
					  void *private), void *private);
extern ssize_t read_kgsl_memstat(const char *name);
#endif

#if IS_ENABLED(CONFIG_QCOM_DMABUF_HEAPS_SYSTEM)
extern atomic64_t qcom_system_heap_total;
extern atomic64_t qcom_dma_heap_pool;
#endif /* CONFIG_QCOM_DMABUF_HEAPS_SYSTEM */

static inline unsigned long sys_totalram(void)
{
	return totalram_pages();
}

static inline unsigned long sys_freeram(void)
{
	return global_zone_page_state(NR_FREE_PAGES);
}

static inline unsigned long sys_inactive_file(void)
{
	return global_node_page_state(NR_ACTIVE_FILE);
}

static inline unsigned long sys_active_file(void)
{
	return global_node_page_state(NR_INACTIVE_FILE);
}

static inline unsigned long sys_file(void)
{
	return global_node_page_state(NR_FILE_PAGES);
}

static inline unsigned long sys_slab_reclaimable(void)
{
	return global_node_page_state_pages(NR_SLAB_RECLAIMABLE_B);
}

static inline unsigned long sys_slab_unreclaimable(void)
{
	return global_node_page_state_pages(NR_SLAB_UNRECLAIMABLE_B);
}

static inline unsigned long sys_vmalloc(void)
{
	return vmalloc_nr_pages();
}

static inline unsigned long sys_inactive_anon(void)
{
	return global_node_page_state(NR_INACTIVE_ANON);
}

static inline unsigned long sys_active_anon(void)
{
	return global_node_page_state(NR_ACTIVE_ANON);
}

static inline unsigned long sys_anon(void)
{
	return global_node_page_state(NR_ANON_MAPPED);
}

static inline unsigned long sys_page_tables(void)
{
	return global_zone_page_state(NR_PAGETABLE);
}

static inline unsigned long sys_kernel_stack(void)
{
	return global_node_page_state(NR_KERNEL_STACK_KB) >> (PAGE_SHIFT - 10);
}

static inline unsigned long sys_kernel_misc_reclaimable(void)
{
	return  global_node_page_state(NR_KERNEL_MISC_RECLAIMABLE);
}

static inline unsigned long sys_sharedram(void)
{
	return global_node_page_state(NR_SHMEM);
}

static inline unsigned long sys_dmabuf(void)
{
#if IS_ENABLED(CONFIG_QCOM_DMABUF_HEAPS_SYSTEM)
	return atomic64_read(&qcom_system_heap_total) >> PAGE_SHIFT;
#else /* CONFIG_QCOM_DMABUF_HEAPS_SYSTEM */
	return 0;
#endif /* CONFIG_QCOM_DMABUF_HEAPS_SYSTEM */
}

static inline unsigned long sys_dmabuf_pool(void)
{
#if IS_ENABLED(CONFIG_DMABUF_HEAPS_PAGE_POOL)
	return atomic64_read(&qcom_dma_heap_pool);
#else /* CONFIG_DMABUF_HEAPS_PAGE_POOL */
	return 0;
#endif /* CONFIG_DMABUF_HEAPS_PAGE_POOL */
}

unsigned long sys_gpu(void);
void seq_put_decimal_ull_width_dup(struct seq_file *m, const char *delimiter,
				   unsigned long long num, unsigned int width);

int osvelte_sys_memstat_init(void);
int osvelte_sys_memstat_exit(void);
#endif /* _OSVELTE_SYS_MEMSTAT_H */
