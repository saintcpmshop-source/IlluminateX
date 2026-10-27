#include "tools.h"
#include <stdio.h>

void start_ftp() {
    printf("[!] Starting built-in FTP Server on port 21...\n");
}

void enable_remote_play() {
    printf("[!] Patching Registry to enable Remote Play on Android/iOS...\n");
}

void spoof_firmware(const char* version) {
    printf("[!] Spoofing Firmware Version to: %s\n", version);
}
