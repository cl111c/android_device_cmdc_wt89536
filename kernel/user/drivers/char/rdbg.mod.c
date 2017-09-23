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
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0xef2d8456, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x92051454, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x704d5df4, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0x705fd105, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xf91d0ae4, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0xb47ce703, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x99c9be6c, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xe05d7fae, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xce2840e7, __VMLINUX_SYMBOL_STR(irq_set_irq_wake) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xab40cca9, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xabf42529, __VMLINUX_SYMBOL_STR(smem_find) },
	{ 0x19bf5458, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value) },
	{ 0x390afe8a, __VMLINUX_SYMBOL_STR(gpiod_get_raw_value) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x29d6b4aa, __VMLINUX_SYMBOL_STR(gpiod_to_irq) },
	{ 0xa3b07cbd, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0xb1663b18, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0x81083bfd, __VMLINUX_SYMBOL_STR(of_count_phandle_with_args) },
	{ 0x3495e257, __VMLINUX_SYMBOL_STR(of_find_compatible_node) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x60aa0367, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x26b0d637, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x11a1d6cf, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xde434656, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbdbc13a1, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xf3185dce, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

