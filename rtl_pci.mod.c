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
	{ 0xa4067906, "ieee80211_rx_irqsafe" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb0498096, "rtl_swlps_beacon" },
	{ 0x191b082b, "rtl_deinit_deferred_work" },
	{ 0x91026422, "rtl_debug_remove_one" },
	{ 0x5a555724, "pci_read_config_byte" },
	{ 0xe303e90f, "pci_disable_device" },
	{ 0xa2efe907, "rtl_deinit_core" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xecbc834, "ieee80211_beacon_get_tim" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x88bfa7e, "cancel_work_sync" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x3d2e268a, "ieee80211_unregister_hw" },
	{ 0xe5f81142, "pci_write_config_byte" },
	{ 0xd1402be1, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xbf5741f6, "pci_release_regions" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x34031466, "read_efuse_byte" },
	{ 0x35c037aa, "rtl_collect_scan_list" },
	{ 0x51663908, "__netdev_alloc_skb" },
	{ 0x54ad30e5, "ieee80211_stop_queue" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x790a0a8b, "pci_set_master" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x4e94cd48, "rtl_global_var" },
	{ 0xe11717bf, "pci_iounmap" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x7e3eb376, "ieee80211_alloc_hw_nm" },
	{ 0x7c32d0f0, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x91307538, "rtl_init_core" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x1bcf7d52, "rtl_action_proc" },
	{ 0x45ba718a, "rtl_dbgp_flag_init" },
	{ 0xf7bc1e8c, "pci_read_config_word" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x6a754dde, "__dev_kfree_skb_irq" },
	{ 0x6b4de810, "rtl_lps_change_work_callback" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xfe064f2d, "rtl_init_rx_config" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x6e174dfe, "skb_pull" },
	{ 0xcdd7166d, "pci_enable_msi" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xd7634e1f, "arch_dma_alloc_attrs" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xe20531dc, "skb_queue_tail" },
	{ 0x8ff4079b, "pv_irq_ops" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x97e05663, "rtl_tid_to_ac" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x164e7c53, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7135407b, "ieee80211_tx_status_irqsafe" },
	{ 0x6152c5dd, "rtl_ops" },
	{ 0x39db5265, "kfree_skb" },
	{ 0x69043652, "rtl_deinit_rfkill" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x85daeaee, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xef96f875, "rtl_p2p_info" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xdce3621, "ieee80211_wake_queue" },
	{ 0x47534224, "ieee80211_register_hw" },
	{ 0xb7a5c862, "rtl_lps_leave" },
	{ 0xfa1c03db, "rtl_recognize_peer" },
	{ 0x69acdf38, "memcpy" },
	{ 0x8edd0e3b, "pci_request_regions" },
	{ 0x69081e7a, "rtl_is_special_data" },
	{ 0x4663aa16, "pci_disable_msi" },
	{ 0x5705d2a, "rtl_init_rfkill" },
	{ 0xc9a2fecc, "ieee80211_free_hw" },
	{ 0xccdbacf8, "skb_dequeue" },
	{ 0xb047f41b, "rtl_debug_add_one" },
	{ 0x29361773, "complete" },
	{ 0xb72ceb, "pci_iomap" },
	{ 0x2618236d, "consume_skb" },
	{ 0x31e615e0, "skb_put" },
	{ 0x18288a7, "pci_enable_device" },
	{ 0xddd6b5e9, "dma_ops" },
	{ 0x555eeca2, "rtl_tx_mgmt_proc" },
	{ 0xe1cd2886, "rtl_beacon_statistic" },
	{ 0xfbeeb242, "pcie_capability_read_word" },
	{ 0xc1514a3b, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,rtlwifi";

