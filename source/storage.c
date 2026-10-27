#include "tools.h"
#include <stdio.h>
#include <sys/storage.h>

// Cobra syscall
extern int sys_storage_ext_mount_discfile(const char* file, const char* mount_point);

void iso_mount(const char* path) {
    printf("[!] Mounting ISO: %s\n", path);
    sys_storage_ext_mount_discfile(path, "/dev_bdvd");
}

void iso_unmount() {
    printf("[!] Unmounting BD Drive...\n");
}

void hdd_format() {
    printf("[!!!] Formatting Internal HDD...\n");
    // sys_fs_format
}
