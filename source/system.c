#include "tools.h"
#include <stdio.h>
#include <sys/sm.h>
#include <sys/ss.h>

void sys_reboot() { sys_sm_shutdown(0x1100); }
void sys_shutdown() { sys_sm_shutdown(0x1200); }

void sys_set_fan_speed(int speed) {
    if(speed == 0) sys_sm_set_fan_policy(0, 0, 0);
    else sys_sm_set_fan_policy(1, 2, speed);
}

void sys_toggle_hen() {
    printf("[!] Toggling HEN Kernel Payload...\n");
    // Requires HEN syscall hooks
}

void sys_toggle_qa_flag(int enable) {
    printf("[!] Setting QA Flag to %d\n", enable);
    // Patch sys_qa_flag
}

void sys_spoof_version(const char* ver) {
    printf("[!] Spoofing Firmware to %s\n", ver);
}
