#include "tools.h"
#include <stdio.h>
#include <sys/sm.h>

void hw_set_fan(int speed) {
    printf("[!] Setting Fan Speed to %d%%\n", speed);
    sys_sm_set_fan_policy(1, 2, speed); 
}

void hw_set_fan_auto() {
    printf("[!] Resetting Fan to Auto\n");
    sys_sm_set_fan_policy(0, 0, 0);
}

void hw_dump_eid_root_key() {
    printf("[!!!] Dumping EID Root Key to USB...\n");
    // sys_ss_get_eid0() call here
}

void hw_remarry_bluray_drive() {
    printf("[!] Remarrying Blu-ray Drive to Motherboard...\n");
    // syscall to remarry BD drive (Fixes broken drives)
}
