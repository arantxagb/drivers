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
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif


static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x3c913dfb, "usb_alloc_urb" },
	{ 0xd8b710c3, "usb_anchor_urb" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x2de8eb5f, "usb_submit_urb" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x7c8c9c8b, "usb_unanchor_urb" },
	{ 0xf301d0c, "kmalloc_caches" },
	{ 0x35789eee, "kmem_cache_alloc_trace" },
	{ 0xceadc1c3, "usb_free_urb" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x37a0cba, "kfree" },
	{ 0xaf800176, "kfree_skb_reason" },
	{ 0x4b8a3f72, "hci_cmd_sync_cancel" },
	{ 0xed38de44, "hci_unregister_dev" },
	{ 0x8d75bb09, "gpiod_put" },
	{ 0x8103fdc7, "hci_free_dev" },
	{ 0x462bc315, "device_init_wakeup" },
	{ 0xa9f9676b, "usb_driver_release_interface" },
	{ 0x63045ed1, "__hci_cmd_sync" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xb64a0e21, "gpiod_set_value_cansleep" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7a3b83de, "__hci_cmd_sync_ev" },
	{ 0x4d79ef23, "usb_autopm_get_interface" },
	{ 0xd8c92763, "usb_queue_reset_device" },
	{ 0x8b340b22, "usb_control_msg" },
	{ 0x92271252, "usb_bulk_msg" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe4e71ba2, "_dev_err" },
	{ 0x2b621031, "usb_disable_autosuspend" },
	{ 0x33c7f167, "hci_recv_diag" },
	{ 0xca27ccda, "hci_recv_frame" },
	{ 0x368cbcd, "usb_autopm_put_interface" },
	{ 0x786d7da9, "btintel_secure_send_result" },
	{ 0x78e4ea9e, "btintel_bootup" },
	{ 0x3cdcd927, "skb_dequeue" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x248efd3, "kstrtobool_from_user" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x214e4265, "bt_warn" },
	{ 0x38507107, "pm_runtime_allow" },
	{ 0x92661301, "__pm_runtime_suspend" },
	{ 0x7c46c075, "pm_runtime_forbid" },
	{ 0xb982b87, "device_set_wakeup_capable" },
	{ 0x723ea67e, "usb_enable_autosuspend" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x6640b3f2, "request_firmware" },
	{ 0x718b8b7, "bt_info" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x69acdf38, "memcpy" },
	{ 0x673caa3b, "__hci_cmd_send" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x44bae227, "bit_wait_timeout" },
	{ 0x4071b517, "out_of_line_wait_on_bit_timeout" },
	{ 0x92997ed8, "_printk" },
	{ 0x6f5ffa95, "usb_match_id" },
	{ 0x2800222e, "devm_kmalloc" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xaa2445b0, "hci_alloc_dev_priv" },
	{ 0x81879f02, "gpiod_get_optional" },
	{ 0x231b1790, "btbcm_setup_patchram" },
	{ 0xa6079a85, "btbcm_set_bdaddr" },
	{ 0x7ceba34a, "usb_ifnum_to_if" },
	{ 0xb4aa539a, "btbcm_setup_apple" },
	{ 0xf8fbc997, "btintel_configure_setup" },
	{ 0xc8ff6f5d, "btmtk_set_bdaddr" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xfe61c8f7, "btrtl_setup_realtek" },
	{ 0xbeab0d3b, "btrtl_shutdown_realtek" },
	{ 0x9046bd32, "usb_set_interface" },
	{ 0x3bc3568f, "usb_driver_claim_interface" },
	{ 0x30a1c7c1, "hci_register_dev" },
	{ 0x71dfbc3a, "debugfs_create_file" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x6eabbea0, "btmtk_setup_firmware" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x45e9a45, "btmtk_setup_firmware_79xx" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x12cc122e, "__alloc_skb" },
	{ 0x1ba244c1, "skb_put" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x3289f4e9, "skb_queue_purge" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xc7f7f526, "skb_queue_tail" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x807766ea, "usb_scuttle_anchored_urbs" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x427bb219, "usb_get_from_anchor" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe3e09c44, "skb_clone" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0xaca7784b, "usb_register_driver" },
	{ 0x6d7d5d36, "usb_deregister" },
	{ 0xa04abfd2, "param_ops_bool" },
	{ 0xc38dfedc, "default_llseek" },
	{ 0x4ca547c1, "simple_open" },
	{ 0x541a6db8, "module_layout" },
};

MODULE_INFO(depends, "bluetooth,btintel,btbcm,btmtk,btrtl");

MODULE_ALIAS("of:N*T*Cusb1286,204e");
MODULE_ALIAS("of:N*T*Cusb1286,204eC*");
MODULE_ALIAS("of:N*T*Cusbcf3,e300");
MODULE_ALIAS("of:N*T*Cusbcf3,e300C*");
MODULE_ALIAS("of:N*T*Cusb4ca,301a");
MODULE_ALIAS("of:N*T*Cusb4ca,301aC*");
MODULE_ALIAS("usb:v0CB8pC549d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dcE0dsc01dp01ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dcE0dsc01dp04ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icE0isc01ip01in*");
MODULE_ALIAS("usb:v05ACp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0E8Dp763Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5Cp21E1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8213d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8215d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8218d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8281d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp3800d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BFp030Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v044Ep3001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v044Ep3002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDBp1002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C10p0000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v19FFp0239d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v105Bp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0BB4p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0489p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v04CAp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0A5Cp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0B05p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v050Dp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v13D3p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v413Cp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0930p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v8087p0A5Ad*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "E678A3C1140EA2ED3AB4D87");
