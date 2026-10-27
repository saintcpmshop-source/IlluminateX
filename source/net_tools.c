#include "tools.h"
#include <stdio.h>

void net_start_ftp() { printf("[!] Starting FTP Server...\n"); }
void net_stop_ftp() { printf("[!] Stopping FTP Server...\n"); }
void net_block_psn() { printf("[!] Blocking PSN Connections...\n"); }
void net_change_mac(const char* mac) { printf("[!] Spoofing MAC to %s\n", mac); }
