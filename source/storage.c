#include "tools.h"
#include <stdio.h>
#include <sys/fs.h>

void mount_iso(const char* path) {
    printf("[!] Mounting ISO: %s\n", path);
    // syscall to mount disc file
}

void unmount_iso() {
    printf("[!] Unmounting virtual Blu-ray drive...\n");
}

void format_usb() {
    printf("[!] Formatting USB to FAT32...\n");
}

void check_hdd_health() {
    printf("[!] Checking HDD S.M.A.R.T. Status...\n");
}
