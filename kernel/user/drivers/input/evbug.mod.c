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
	{ 0x2b6aeb13, __VMLINUX_SYMBOL_STR(input_unregister_handler) },
	{ 0xa839cf33, __VMLINUX_SYMBOL_STR(input_register_handler) },
	{ 0xdc947ee0, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x9e2e091c, __VMLINUX_SYMBOL_STR(input_open_device) },
	{ 0xcd006148, __VMLINUX_SYMBOL_STR(input_register_handle) },
	{ 0x9f1dfb95, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2f41800f, __VMLINUX_SYMBOL_STR(input_unregister_handle) },
	{ 0xe77d6c21, __VMLINUX_SYMBOL_STR(input_close_device) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("input:b*v*p*e*-e*k*r*a*m*l*s*f*w*");
