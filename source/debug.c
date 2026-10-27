#include "tools.h"
#include <stdio.h>

void dev_toggle_xmb_debug() {
    printf("[!] Enabling XMB Debug Menus...\n");
}

void dev_spoof_region(const char* region) {
    printf("[!] Spoofing Region to %s\n", region);
}

void dev_dump_lv2_memory() {
    printf("[!] Dumping LV2 Kernel Memory to USB...\n");
}
