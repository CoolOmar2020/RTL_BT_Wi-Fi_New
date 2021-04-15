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
	{ 0x74e79d8f, "rtl_cam_delete_one_entry" },
	{ 0x11240109, "rtl_fw_cb" },
	{ 0xc52f874a, "kmalloc_caches" },
	{ 0xf2209ab1, "rtl_pci_probe" },
	{ 0x160cbad6, "rtl_cam_get_free_entry" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xdaf485b9, "pv_lock_ops" },
	{ 0xb5da66ef, "param_ops_int" },
	{ 0xebfda750, "rtl_dm_diginit" },
	{ 0x635b52cf, "rtl_ps_disable_nic" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x305d00ad, "rtl_get_tcb_desc" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xad27f361, "__warn_printk" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x30a956d7, "rtl_query_rxpwrpercentage" },
	{ 0x5abff026, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x14cf99db, "rtl_cam_add_one_entry" },
	{ 0x999e8297, "vfree" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xed7c8cf2, "rtl_evm_db_to_percentage" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x51663908, "__netdev_alloc_skb" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x28eb832b, "rtl_pci_resume" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x3be51582, "rtl_ps_enable_nic" },
	{ 0xb23c9298, "rtl_get_hwinfo" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x7c32d0f0, "printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xea83090c, "skb_push" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xacf035bf, "rtl_signal_scale_mapping" },
	{ 0xec7a73e1, "request_firmware_nowait" },
	{ 0x8dfbaa63, "rtl_pci_suspend" },
	{ 0xfe2e63c0, "rtlwifi_rate_mapping" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xa5f7b7f6, "rtl_pci_disconnect" },
	{ 0xc760ae23, "rtl_cmd_send_packet" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x8ff4079b, "pv_irq_ops" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x39db5265, "kfree_skb" },
	{ 0x4f434be1, "ieee80211_find_sta" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x8945b09b, "pci_unregister_driver" },
	{ 0x287665f6, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4a55a9f9, "rtl_cam_mark_invalid" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb345eb5d, "rtl_cam_del_entry" },
	{ 0x4cb9f8e8, "rtl_cam_empty_entry" },
	{ 0x94d14bcc, "__pci_register_driver" },
	{ 0x3747b518, "rtl_cam_reset_all_entry" },
	{ 0x6f246556, "rtl_process_phyinfo" },
	{ 0x31e615e0, "skb_put" },
	{ 0x515279ab, "efuse_read_1byte" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xddd6b5e9, "dma_ops" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rtlwifi,rtl_pci,mac80211";

MODULE_ALIAS("pci:v000010ECd00008179sv*sd*bc*sc*i*");
