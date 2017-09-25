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
	{ 0xd58cfefe, __VMLINUX_SYMBOL_STR(test_iosched_unregister) },
	{ 0x6ce637d4, __VMLINUX_SYMBOL_STR(test_iosched_register) },
	{ 0x6551014b, __VMLINUX_SYMBOL_STR(test_iosched_set_ignore_round) },
	{ 0x7671ae32, __VMLINUX_SYMBOL_STR(mmc_blk_get_packed_statistics) },
	{ 0xf33847d3, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x5cd885d5, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xad39d0b6, __VMLINUX_SYMBOL_STR(test_iosched_add_unique_test_req) },
	{ 0xdc947ee0, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xa9d7a0bd, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0xb86dd21e, __VMLINUX_SYMBOL_STR(debugfs_create_u32) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x9f1dfb95, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xae11c01c, __VMLINUX_SYMBOL_STR(debugfs_remove) },
	{ 0x70605f18, __VMLINUX_SYMBOL_STR(test_iosched_mark_test_completion) },
	{ 0xfd2a1e9b, __VMLINUX_SYMBOL_STR(test_iosched_create_test_req) },
	{ 0x99fa2d6c, __VMLINUX_SYMBOL_STR(check_test_completion) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x95c84ea0, __VMLINUX_SYMBOL_STR(test_iosched_free_test_req_data_buffer) },
	{ 0x97fdbab9, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x90971302, __VMLINUX_SYMBOL_STR(__blk_put_request) },
	{ 0x96220280, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xa916b694, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x7bf3189f, __VMLINUX_SYMBOL_STR(test_iosched_set_test_result) },
	{ 0xb48fefa5, __VMLINUX_SYMBOL_STR(__blk_run_queue) },
	{ 0x9831c9ce, __VMLINUX_SYMBOL_STR(test_iosched_add_wr_rd_test_req) },
	{ 0x59cdc392, __VMLINUX_SYMBOL_STR(mmc_blk_init_packed_statistics) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x35678722, __VMLINUX_SYMBOL_STR(test_iosched_start_test) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=test-iosched";

