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
	{ 0x51df9f66, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0xc142bffd, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x2f1830fc, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x2d57ea51, __VMLINUX_SYMBOL_STR(mmc_unregister_driver) },
	{ 0x34541e70, __VMLINUX_SYMBOL_STR(mmc_register_driver) },
	{ 0x7a700fe, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0xf8a93c54, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x27fa66e1, __VMLINUX_SYMBOL_STR(nr_free_buffer_pages) },
	{ 0x52730b85, __VMLINUX_SYMBOL_STR(mmc_can_trim) },
	{ 0x7fe38f48, __VMLINUX_SYMBOL_STR(sg_copy_to_buffer) },
	{ 0x1bdc26cf, __VMLINUX_SYMBOL_STR(sg_copy_from_buffer) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xb6244511, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0xff401134, __VMLINUX_SYMBOL_STR(mmc_set_blocklen) },
	{ 0xf8e398fc, __VMLINUX_SYMBOL_STR(memstart_addr) },
	{ 0x211f68f1, __VMLINUX_SYMBOL_STR(getnstimeofday64) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xc897c382, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x75c60ab5, __VMLINUX_SYMBOL_STR(mmc_wait_for_req) },
	{ 0x5b6caa94, __VMLINUX_SYMBOL_STR(mmc_wait_for_cmd) },
	{ 0xa1b649cf, __VMLINUX_SYMBOL_STR(mmc_start_req) },
	{ 0xc14e2a21, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x3957322f, __VMLINUX_SYMBOL_STR(mmc_set_data_timeout) },
	{ 0xbc3d9a87, __VMLINUX_SYMBOL_STR(mmc_erase) },
	{ 0x8111c942, __VMLINUX_SYMBOL_STR(mmc_can_erase) },
	{ 0xe6da44a, __VMLINUX_SYMBOL_STR(set_normalized_timespec) },
	{ 0x388d3ce0, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x11a1d6cf, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xa9d7a0bd, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0xdc947ee0, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x97ca3c9e, __VMLINUX_SYMBOL_STR(mmc_release_host) },
	{ 0x9f1dfb95, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x1d82ed45, __VMLINUX_SYMBOL_STR(__mmc_claim_host) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x7d88731e, __VMLINUX_SYMBOL_STR(kstrtol_from_user) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2c98ae9c, __VMLINUX_SYMBOL_STR(mmc_can_reset) },
	{ 0xafdb079f, __VMLINUX_SYMBOL_STR(mmc_hw_reset_check) },
	{ 0x6f9bfbf4, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xc34fcd8c, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0xae11c01c, __VMLINUX_SYMBOL_STR(debugfs_remove) },
	{ 0x60aa0367, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x26b0d637, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

