#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xedeb23cb, "module_layout" },
	{ 0xd62c081, "ieee80211_rx_napi" },
	{ 0xc52f874a, "kmalloc_caches" },
	{ 0x191b082b, "rtl_deinit_deferred_work" },
	{ 0xa2efe907, "rtl_deinit_core" },
	{ 0x4a1bf313, "usb_get_from_anchor" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x88bfa7e, "cancel_work_sync" },
	{ 0x448eac3e, "kmemdup" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x3d2e268a, "ieee80211_unregister_hw" },
	{ 0xd1402be1, "__dev_kfree_skb_any" },
	{ 0x59bfe051, "usb_unanchor_urb" },
	{ 0x51663908, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x76447849, "skb_queue_purge" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x7e3eb376, "ieee80211_alloc_hw_nm" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x91307538, "rtl_init_core" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x1bcf7d52, "rtl_action_proc" },
	{ 0x45ba718a, "rtl_dbgp_flag_init" },
	{ 0x411deabe, "usb_control_msg" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x6b4de810, "rtl_lps_change_work_callback" },
	{ 0xfe064f2d, "rtl_init_rx_config" },
	{ 0x6e174dfe, "skb_pull" },
	{ 0xc1ea2c2b, "usb_free_coherent" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xe20531dc, "skb_queue_tail" },
	{ 0x3ef1449a, "usb_submit_urb" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xd9a45341, "usb_get_dev" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7314bc25, "usb_put_dev" },
	{ 0x7135407b, "ieee80211_tx_status_irqsafe" },
	{ 0x6152c5dd, "rtl_ops" },
	{ 0x39db5265, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x287665f6, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x47534224, "ieee80211_register_hw" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x65c9d895, "rtl_ips_nic_on" },
	{ 0xc9a2fecc, "ieee80211_free_hw" },
	{ 0xccdbacf8, "skb_dequeue" },
	{ 0x29361773, "complete" },
	{ 0x95333195, "usb_alloc_coherent" },
	{ 0x31e615e0, "skb_put" },
	{ 0xe716e563, "usb_free_urb" },
	{ 0xe1cd2886, "rtl_beacon_statistic" },
	{ 0xa0198934, "usb_anchor_urb" },
	{ 0x9043ec61, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,rtlwifi,usbcore";

