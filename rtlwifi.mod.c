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
__used
__attribute__((section("__versions"))) = {
	{ 0xedeb23cb, "module_layout" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa4067906, "ieee80211_rx_irqsafe" },
	{ 0xc52f874a, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x97e33b8d, "debugfs_create_dir" },
	{ 0xdaf485b9, "pv_lock_ops" },
	{ 0x7101db67, "single_open" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xc2820819, "seq_puts" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xecbc834, "ieee80211_beacon_get_tim" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xa1f9a134, "__x86_indirect_thunk_rsi" },
	{ 0x3b08a9a5, "seq_printf" },
	{ 0xad27f361, "__warn_printk" },
	{ 0xb3198550, "ieee80211_resume_disconnect" },
	{ 0x1d238dfb, "seq_write" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xd1402be1, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xcbc3e9a3, "rate_control_send_low" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xf6c1256d, "cancel_delayed_work_sync" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x9c69263f, "freq_reg_info" },
	{ 0xdbd0ed4d, "debugfs_create_file" },
	{ 0xdca6ed38, "wiphy_rfkill_start_polling" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xc84c1bbe, "debugfs_remove_recursive" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x7581f27f, "seq_read" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x51663908, "__netdev_alloc_skb" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xf618a399, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x4465b92f, "cancel_delayed_work" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x9e021f5, "ieee80211_rate_control_register" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xb67b1181, "wiphy_apply_custom_regulatory" },
	{ 0x6a754dde, "__dev_kfree_skb_irq" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x3261b92e, "wiphy_rfkill_stop_polling" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x96113623, "wiphy_to_ieee80211_hw" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x711ed02c, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x12a38747, "usleep_range" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x164e7c53, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x413469ac, "wiphy_rfkill_set_hw_state" },
	{ 0x4f434be1, "ieee80211_find_sta" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x287665f6, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x58b5e259, "ieee80211_get_hdrlen_from_skb" },
	{ 0x112926aa, "ieee80211_rate_control_unregister" },
	{ 0x66f4f217, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xc1aba2c4, "ieee80211_start_tx_ba_session" },
	{ 0x3221a66c, "request_firmware" },
	{ 0x2e0d2f7f, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x28318305, "snprintf" },
	{ 0xcfbe355c, "seq_release" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x31e615e0, "skb_put" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x40721beb, "release_firmware" },
	{ 0x7d8dc1bd, "ieee80211_connection_loss" },
	{ 0xaae73d79, "ieee80211_start_tx_ba_cb_irqsafe" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xeb0e37b8, "device_set_wakeup_enable" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,cfg80211";

