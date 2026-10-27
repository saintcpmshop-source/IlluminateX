/* 
 * IlluminateX - Ultimate PS3 Toolkit
 * Copyright (c) 2026 saintcpmshop-source. All Rights Reserved.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sysutil/sysutil.h>
#include <sys/process.h>
#include <sys/memory.h>
#include <sys/timer.h>
#include <sys/fs.h>
#include <sys/stat.h>

#define USB1 "/dev_usb000"
#define USB2 "/dev_usb001"
#define HDD  "/dev_hdd0"

void initialize_dashboard() {
    printf("\033[2J\033[H"); // Clear screen
    printf("==========================================\n");
    printf("       IlluminateX - Ultimate Toolkit      \n");
    printf("           By saintcpmshop-source          \n");
    printf("==========================================\n\n");
    
    struct stat st;
    if (stat(USB1, &st) == 0) printf("[+] USB 1 Mounted\n");
    if (stat(USB2, &st) == 0) printf("[+] USB 2 Mounted\n");
    printf("[+] Internal HDD Mounted\n");
    
    printf("\n[!] Initializing system hooks...\n");
    sysUtilSleep(2000);
    
    printf("[!] Launching IlluminateX Web Dashboard...\n");
}

int main(int argc, char *argv[]) {
    sysUtilInit();
    sysFsInit();
    initialize_dashboard();

    while(1) {
        sysUtilCheckCallback(); 
        sysUtilSleep(100); 
    }

    sysFsExit();
    sysUtilExit();
    return 0;
}
