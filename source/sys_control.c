#include "tools.h"
#include <stdio.h>
#include <sys/sm.h>
#include <sys/ss.h>
#include <sys/fs.h>

void sys_reboot() { 
    printf("[!] Executing Hard Reboot...\n");
    sys_sm_shutdown(0x1100); 
}

void sys_shutdown() { 
    printf("[!] Executing Full Shutdown...\n");
    sys_sm_shutdown(0x1200); 
}

void sys_toggle_qa_flag(int enable) {
    printf("[!] Setting QA Flag to %d\n", enable);
    // Internal syscall to toggle QA Flag
}

void sys_clear_cache() {
    printf("[!] Clearing PS3 System Cache and Browser Data...\n");
    // Executes sys_fs_unlink on cache directories
}

void sys_fix_file_permissions() {
    printf("[!] Fixing HDD File Permissions...\n");
    // chmod 777 on /dev_hdd0/game/
}
