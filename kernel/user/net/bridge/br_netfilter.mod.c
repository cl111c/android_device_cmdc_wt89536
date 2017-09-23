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
	{ 0xdc947ee0, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x78b16335, __VMLINUX_SYMBOL_STR(unregister_net_sysctl_table) },
	{ 0x462c660f, __VMLINUX_SYMBOL_STR(proc_dointvec) },
	{ 0xa3923a1e, __VMLINUX_SYMBOL_STR(__skb_dst_set_noref) },
	{ 0x32c7de84, __VMLINUX_SYMBOL_STR(ip_fragment) },
	{ 0x41c456f2, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xe7a664c4, __VMLINUX_SYMBOL_STR(nf_hooks) },
	{ 0x67709f6e, __VMLINUX_SYMBOL_STR(neigh_destroy) },
	{ 0xc38259af, __VMLINUX_SYMBOL_STR(__this_cpu_preempt_check) },
	{ 0x7cad61f7, __VMLINUX_SYMBOL_STR(nf_hook_slow) },
	{ 0xb6f7533a, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x7f558584, __VMLINUX_SYMBOL_STR(br_dev_queue_push_xmit) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xef12d9ac, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x79d21fae, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x85072fa1, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xbc7805fe, __VMLINUX_SYMBOL_STR(nf_unregister_hooks) },
	{ 0x7dc73f6b, __VMLINUX_SYMBOL_STR(br_forward_finish) },
	{ 0xc928902a, __VMLINUX_SYMBOL_STR(ip_route_input_noref) },
	{ 0x4e9dffb5, __VMLINUX_SYMBOL_STR(ip_fast_csum) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x6ca1c08c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x9f1dfb95, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x377dc01d, __VMLINUX_SYMBOL_STR(skb_pull_rcsum) },
	{ 0x2bc87aef, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xeb790fa9, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0x4bf92243, __VMLINUX_SYMBOL_STR(nf_register_hooks) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdcd906fe, __VMLINUX_SYMBOL_STR(br_handle_frame_finish) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x1022dbae, __VMLINUX_SYMBOL_STR(register_net_sysctl) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

