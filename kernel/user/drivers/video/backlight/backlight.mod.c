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
	{ 0x73cf9e5c, __VMLINUX_SYMBOL_STR(class_find_device) },
	{ 0xdc947ee0, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x80d68d3e, __VMLINUX_SYMBOL_STR(fb_register_client) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xe93e49c3, __VMLINUX_SYMBOL_STR(devres_free) },
	{ 0x60aa0367, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x113b537a, __VMLINUX_SYMBOL_STR(blocking_notifier_chain_unregister) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x60ea2d6, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0xe718d40b, __VMLINUX_SYMBOL_STR(device_register) },
	{ 0xe05d7fae, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x26b0d637, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xba094b59, __VMLINUX_SYMBOL_STR(devres_alloc) },
	{ 0xca96a0c8, __VMLINUX_SYMBOL_STR(kobject_uevent_env) },
	{ 0xc5fc7c14, __VMLINUX_SYMBOL_STR(devres_release) },
	{ 0xf2fe9ab2, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xb9d6e8ba, __VMLINUX_SYMBOL_STR(blocking_notifier_call_chain) },
	{ 0x7327575f, __VMLINUX_SYMBOL_STR(sysfs_notify) },
	{ 0x6badd09c, __VMLINUX_SYMBOL_STR(blocking_notifier_chain_register) },
	{ 0x6fc6c0ab, __VMLINUX_SYMBOL_STR(devres_add) },
	{ 0x9f1dfb95, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x92051454, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0xb12cbacb, __VMLINUX_SYMBOL_STR(fb_unregister_client) },
	{ 0xd58764, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x238f1817, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0xf91d0ae4, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x67a52e76, __VMLINUX_SYMBOL_STR(__init_rwsem) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

