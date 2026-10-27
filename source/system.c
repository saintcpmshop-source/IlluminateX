#include "tools.h"
#include <stdio.h>
#include <sys/syscall.h>
#include <sys/sm.h>

void reboot_ps3() { sys_sm_shutdown(0x1100); }
void shutdown_ps3() { sys_sm_shutdown(0x1200); }

void toggle_hen() {
    printf("[!] Toggling HEN (Homebrew Enabler) State...\n");
    // Syscall to enable/disable HEN payload
    // sys_sm_set_hen_state(1); 
}

void toggle_cfw() {
    printf("[!] Switching CFW Kernel Mode (Cobra/Mamba)...\n");
    // Trigger CFW kernel toggles
}

void set_fan_speed(int speed) {
    if(speed == 0) sys_sm_set_fan_policy(0, 0, 0);
    else sys_sm_set_fan_policy(1, 2, speed);
}
