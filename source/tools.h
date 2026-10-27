#ifndef TOOLS_H
#define TOOLS_H

#include <stdint.h>

// --- SYS_CONTROL.C ---
void sys_reboot();
void sys_shutdown();
void sys_toggle_qa_flag(int enable);
void sys_toggle_hen();
void sys_spoof_firmware(const char* ver);
void sys_clear_cache();
void sys_fix_file_permissions();

// --- HW_CONTROL.C ---
int  hw_get_cpu_temp();
int  hw_get_rsx_temp();
void hw_set_fan(int speed);
void hw_set_fan_auto();
void hw_dump_eid_root_key();
void hw_overclock_rsx(int enable);
void hw_toggle_ps2_emulation();
void hw_remarry_bluray_drive();

// --- PKG_MANAGER.C ---
void pkg_install(const char* path);
void pkg_extract(const char* path);
void pkg_decrypt(const char* path);
void pkg_merge_split_files(const char* base_name);
void pkg_install_rap(const char* rap_path);
void pkg_install_edat(const char* edat_path);

// --- DEV_TOOLS.C ---
void dev_dump_lv2_memory();
void dev_dump_flash();
void dev_spoof_region(const char* region);
void dev_change_console_id(const char* id);
void dev_toggle_cobra_debug();

// --- NET_TOOLS.C ---
void net_start_ftp();
void net_stop_ftp();
void net_block_psn();
void net_enable_remote_play();
void net_change_mac(const char* mac);
void net_flush_dns();

// --- GAME_MODS.C ---
void game_patch_eboot(const char* path);
void game_unpatch_eboot(const char* path);
void game_inject_dlc(const char* path);
void game_decrypt_save(const char* path);

#endif
