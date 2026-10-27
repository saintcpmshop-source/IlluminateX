#include "tools.h"
#include <stdio.h>
#include <sys/sm.h>
#include <sys/ss.h>
#include <sys/fs.h>

void sys_reboot() { sys_sm_shutdown(0x1100); }
void sys_shutdown() { sys_sm_shutdown(0x1200); }
void sys_toggle_qa_flag(int enable) { printf("[!] QA Flag set to %d\n", enable); }
void sys_toggle_hen() { printf("[!] Toggling HEN state...\n"); }
void sys_spoof_firmware(const char* ver) { printf("[!] Spoofing FW to %s\n", ver); }
void sys_clear_cache() { printf("[!] Clearing system cache...\n"); }
void sys_fix_file_permissions() { printf("[!] Fixing HDD permissions...\n"); }
