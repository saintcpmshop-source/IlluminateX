#include "tools.h"
#include <stdio.h>

void net_start_ftp() {
    printf("[!] Starting Built-in FTP Server (Port 21)...\n");
}

void net_enable_remote_play() {
    printf("[!] Patching Remote Play registry for Android/iOS...\n");
}

void net_change_mac(const char* mac) {
    printf("[!] Spoofing MAC Address to %s\n", mac);
}
