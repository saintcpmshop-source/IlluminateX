#ifndef TOOLS_H
#define TOOLS_H

// --- GRAPHICS ---
void init_graphics();
void draw_dashboard();
void close_graphics();

// --- SYSTEM CONTROL ---
void sys_reboot();
void sys_shutdown();
void sys_toggle_qa_flag(int enable);
void sys_toggle_hen();
void sys_spoof_firmware(const char* ver);
void sys_clear_cache();
void sys_fix_file_permissions();

// --- HARDWARE CONTROL ---
void hw_set_fan(int speed);
void hw_set_fan_auto();
void hw_dump_eid_root_key();
void hw_overclock_rsx(int enable);
void hw_remarry_bluray_drive();
void hw_rip_disc_to_iso(const char* usb_path);
void hw_format_usb_fat32(const char* usb_path);

// --- PKG MANAGER ---
void pkg_install(const char* path);
void pkg_extract(const char* path);
void pkg_decrypt(const char* path);
void pkg_merge_split_files(const char* base_name);
void pkg_install_rap(const char* rap_path);

// --- DEV TOOLS ---
void dev_dump_lv2_memory();
void dev_dump_flash();
void dev_spoof_region(const char* region);
void dev_change_console_id(const char* id);

// --- NETWORK TOOLS ---
void net_start_ftp();
void net_stop_ftp();
void net_block_psn();
void net_change_mac(const char* mac);

// --- GAME MODS (No ISO Mounting) ---
void game_patch_eboot(const char* path);
void game_inject_dlc(const char* path);
void game_decrypt_save(const char* path);
void game_unlock_trophies(const char* path);

#endif
