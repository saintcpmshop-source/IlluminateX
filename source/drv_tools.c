#include "tools.h"
#include <stdio.h>

void dev_dump_lv2_memory() { printf("[!] Dumping LV2 Memory...\n"); }
void dev_dump_flash() { printf("[!] Dumping Flash to USB...\n"); }
void dev_spoof_region(const char* region) { printf("[!] Spoofing Region to %s\n", region); }
void dev_change_console_id(const char* id) { printf("[!] Changing Console ID to %s\n", id); }
