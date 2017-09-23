#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x5eb6fc47, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xde856f5d, __VMLINUX_SYMBOL_STR(kobject_put) },
	{ 0x382e408a, __VMLINUX_SYMBOL_STR(fs_bio_set) },
	{ 0xdc947ee0, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x9b388444, __VMLINUX_SYMBOL_STR(get_zeroed_page) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x8ebe5423, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0xf33847d3, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x9452ea20, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x98cf60b3, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xddc2ff57, __VMLINUX_SYMBOL_STR(blk_put_request) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xc310b981, __VMLINUX_SYMBOL_STR(strnstr) },
	{ 0x60aa0367, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x63348e6, __VMLINUX_SYMBOL_STR(blk_run_queue) },
	{ 0xa87cf413, __VMLINUX_SYMBOL_STR(clear_bit) },
	{ 0xfb3f20e1, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0xab40cca9, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xb86dd21e, __VMLINUX_SYMBOL_STR(debugfs_create_u32) },
	{ 0xcf929212, __VMLINUX_SYMBOL_STR(init_request_from_bio) },
	{ 0x2632b210, __VMLINUX_SYMBOL_STR(elevator_alloc) },
	{ 0x97fdbab9, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x773aff68, __VMLINUX_SYMBOL_STR(elv_unregister) },
	{ 0x4ba9859b, __VMLINUX_SYMBOL_STR(elv_dispatch_sort) },
	{ 0x26b0d637, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x6d93bbf7, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0x29397fc1, __VMLINUX_SYMBOL_STR(elv_register) },
	{ 0xdb3a16c9, __VMLINUX_SYMBOL_STR(blk_rq_map_kern) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x9f1dfb95, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x5cd885d5, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x96220280, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x65345022, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xcb128141, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x9c5bc552, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xf65c6b57, __VMLINUX_SYMBOL_STR(blk_get_request) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

