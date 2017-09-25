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
	{ 0xa174f441, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x542b9bf7, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xa15db286, __VMLINUX_SYMBOL_STR(devm_backlight_device_register) },
	{ 0x388d3ce0, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x60aa0367, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x26b0d637, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=backlight";

