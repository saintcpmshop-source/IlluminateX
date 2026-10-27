#ifndef TOOLS_H
#define TOOLS_H

// System Tools
void reboot_ps3();
void shutdown_ps3();
void toggle_hen();
void toggle_cfw();
void set_fan_speed(int speed);

// Storage Tools
void mount_iso(const char* path);
void unmount_iso();
void format_usb();
void check_hdd_health();

// PKG Tools
void install_pkg(const char* path);
void extract_pkg(const char* path);
void decrypt_pkg(const char* path);

// Network Tools
void start_ftp();
void enable_remote_play();
void spoof_firmware(const char* version);

#endif
