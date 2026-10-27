#include "tools.h"
#include <stdio.h>
#include <sys/sm.h>

void hw_set_fan(int speed) { sys_sm_set_fan_policy(1, 2, speed); }
void hw_set_fan_auto() { sys_sm_set_fan_policy(0, 0, 0); }
void hw_dump_eid_root_key() { printf("[!!!] Dumping EID Root Key...\n"); }
void hw_overclock_rsx(int enable) { printf("[!] RSX Overclock set to %d\n", enable); }
void hw_remarry_bluray_drive() { printf("[!] Remarrying Blu-ray Drive...\n"); }
void hw_rip_disc_to_iso(const char* usb_path) { printf("[!] Ripping disc to %s\n", usb_path); }
void hw_format_usb_fat32(const char* usb_path) { printf("[!] Formatting USB %s\n", usb_path); }
