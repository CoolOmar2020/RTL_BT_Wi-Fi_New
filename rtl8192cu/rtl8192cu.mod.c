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
	{ 0xd62c081, "ieee80211_rx_napi" },
	{ 0x74e79d8f, "rtl_cam_delete_one_entry" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x11240109, "rtl_fw_cb" },
	{ 0xc52f874a, "kmalloc_caches" },
	{ 0x160cbad6, "rtl_cam_get_free_entry" },
	{ 0x3751ddd7, "rtl92c_phy_set_rfpath_switch" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x5c335b38, "rtl_usb_disconnect" },
	{ 0xa2f093bc, "_rtl92c_phy_fw_rf_serial_read" },
	{ 0xb5da66ef, "param_ops_int" },
	{ 0x9f03da17, "rtl92c_phy_set_txpower_level" },
	{ 0x881f86c9, "rtl92c_set_fw_rsvdpagepkt" },
	{ 0x3216c7da, "rtl92c_dm_check_txpower_tracking" },
	{ 0x635b52cf, "rtl_ps_disable_nic" },
	{ 0x2a2d7cb3, "rtl92c_dm_watchdog" },
	{ 0xda73eebf, "_rtl92c_phy_init_bb_rf_register_definition" },
	{ 0x832aa1e9, "_rtl92c_phy_rf_serial_write" },
	{ 0x305d00ad, "rtl_get_tcb_desc" },
	{ 0x33270c66, "_rtl92c_phy_rf_serial_read" },
	{ 0xb8f13d6c, "rtl92c_phy_set_bw_mode" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x94d7ff1b, "rtl92c_phy_lc_calibrate" },
	{ 0x2327d91c, "_rtl92c_phy_calculate_bit_shift" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x5abff026, "param_ops_bool" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x14cf99db, "rtl_cam_add_one_entry" },
	{ 0x999e8297, "vfree" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc986675a, "rtl_phy_scan_operation_backup" },
	{ 0x5a493632, "rtl92c_dm_init_edca_turbo" },
	{ 0x33f955dc, "rtl92c_phy_iq_calibrate" },
	{ 0xd18a323a, "rtl92c_dm_init" },
	{ 0xc46904da, "rtl_usb_probe" },
	{ 0x32a2f859, "rtl92c_phy_set_bb_reg" },
	{ 0x3be51582, "rtl_ps_enable_nic" },
	{ 0xb23c9298, "rtl_get_hwinfo" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xbad26ea9, "usb_deregister" },
	{ 0x7c32d0f0, "printk" },
	{ 0xa5c88a62, "rtl92c_dm_rf_saving" },
	{ 0x32e704b1, "rtl92c_set_fw_pwrmode_cmd" },
	{ 0x3f4e5b0f, "dm_writepowerindex" },
	{ 0xea83090c, "skb_push" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x4b6fb181, "_rtl92c_phy_fw_rf_serial_write" },
	{ 0x6e174dfe, "skb_pull" },
	{ 0x13f3cfb2, "_rtl92c_phy_set_rf_sleep" },
	{ 0xec7a73e1, "request_firmware_nowait" },
	{ 0xfe2e63c0, "rtlwifi_rate_mapping" },
	{ 0x490091f0, "rtl92c_set_fw_joinbss_report_cmd" },
	{ 0x7853c6ba, "rtl92c_download_fw" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x8ff4079b, "pv_irq_ops" },
	{ 0x2780fd94, "rtl_rfreg_delay" },
	{ 0x6c926841, "rtl92c_phy_set_io_cmd" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x4f434be1, "ieee80211_find_sta" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x287665f6, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4a55a9f9, "rtl_cam_mark_invalid" },
	{ 0xc5071aab, "rtl92c_phy_rf_config" },
	{ 0x37a0cba, "kfree" },
	{ 0xb345eb5d, "rtl_cam_del_entry" },
	{ 0x4cb9f8e8, "rtl_cam_empty_entry" },
	{ 0x9306e16e, "rtl92ce_phy_set_rf_on" },
	{ 0x1c62af53, "usb_register_driver" },
	{ 0x2251c0a, "rtl92c_phy_query_bb_reg" },
	{ 0xaaa7d3af, "_rtl92c_store_pwrIndex_diffrate_offset" },
	{ 0xccdbacf8, "skb_dequeue" },
	{ 0x3747b518, "rtl_cam_reset_all_entry" },
	{ 0x2e0d2f7f, "queue_work_on" },
	{ 0x6f246556, "rtl_process_phyinfo" },
	{ 0x6a3f3e3, "dm_restorepowerindex" },
	{ 0x515279ab, "efuse_read_1byte" },
	{ 0x2cd453ac, "_rtl92c_phy_bb8192c_config_parafile" },
	{ 0x3e57a8e3, "rtl92c_fill_h2c_cmd" },
	{ 0xfe87007c, "rtl92c_phy_sw_chnl" },
	{ 0x1b945315, "rtl_addr_delay" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,rtlwifi,rtl8192c-common,rtl_usb,usbcore";

MODULE_ALIAS("usb:v0BDAp8191d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp018Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8170d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8176d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8177d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp818Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp819Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8754d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8178d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp1102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp11F2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE033d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p8188d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p8189d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9043d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17BAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp5088d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0052d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p005Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0070d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0077d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB0p9071d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4856p0091d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v103Cp1629d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3357d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3308d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019p4902d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB2Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB2Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pED17d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20F4p648Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7811d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3358d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3359d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4855p0090d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4855p0091d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9846p9041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp317Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFF7d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFF9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFFAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFF8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFFBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFFCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019p1201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp1004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp2102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp2103d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p341Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0056d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p8178d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9021d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846pF001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17ABd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8186d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0061d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E66p0019d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3307d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3309d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p330Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p330Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB2Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20F4p624Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7822d*dc*dsc*dp*ic*isc*ip*in*");
