#ifndef TOOLS_H
#define TOOLS_H

// System Tools
void sys_reboot();
void sys_shutdown();
void sys_toggle_hen();
void sys_toggle_cfw();
void sys_spoof_version(const char* ver);
void sys_toggle_qa_flag(int enable);
void sys_set_console_id();
void sys_set_fan_speed(int speed);

// Hardware Tools
int  hw_get_cpu_temp();
int  hw_get_rsx_temp();
void hw_overclock_rsx(int enable);
void hw_dump_eid_root_key();
void hw_read_syscon();
void hw_write_syscon();
void hw_toggle_ps2_emulation();

// Storage & Game Tools
void iso_scan_usb();
void iso_mount(const char* path);
void iso_unmount();
void hdd_format();
void hdd_check_smart();
void hdd_expand_ps2_partition();
void game_toggle_cobra_mode();

// PKG & File Tools
void pkg_install(const char* path);
void pkg_extract(const char* path);
void pkg_decrypt(const char* path);
void pkg_merge_split_files();
void file_manager_copy(const char* src, const char* dst);

// Network Tools
void net_start_ftp();
void net_stop_ftp();
void net_enable_remote_play();
void net_change_mac(const char* mac);
void net_start_web_server();

// Debug & Development Tools
void dev_toggle_xmb_debug();
void dev_spoof_region(const char* region);
void dev_dump_lv2_memory();
void dev_dump_flash();

#endif
