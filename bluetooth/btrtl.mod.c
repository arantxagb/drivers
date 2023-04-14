#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

SYMBOL_CRC(btrtl_free, 0xaf78f260, "_gpl");
SYMBOL_CRC(btrtl_initialize, 0xb69b5834, "_gpl");
SYMBOL_CRC(btrtl_download_firmware, 0x4a8c5767, "_gpl");
SYMBOL_CRC(btrtl_set_quirks, 0x9cb0a8c5, "_gpl");
SYMBOL_CRC(btrtl_setup_realtek, 0xfe61c8f7, "_gpl");
SYMBOL_CRC(btrtl_shutdown_realtek, 0xbeab0d3b, "_gpl");
SYMBOL_CRC(btrtl_get_uart_settings, 0xb1ad34be, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x37a0cba, "kfree" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x92997ed8, "_printk" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x63045ed1, "__hci_cmd_sync" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0xaf800176, "kfree_skb_reason" },
	{ 0x718b8b7, "bt_info" },
	{ 0x6640b3f2, "request_firmware" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x69acdf38, "memcpy" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xf301d0c, "kmalloc_caches" },
	{ 0x35789eee, "kmem_cache_alloc_trace" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x214e4265, "bt_warn" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x12cc122e, "__alloc_skb" },
	{ 0x1ba244c1, "skb_put" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xf9a482f9, "msleep" },
	{ 0x541a6db8, "module_layout" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "41CB3A4F3D9140AD20513D3");
