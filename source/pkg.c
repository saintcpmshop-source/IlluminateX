#include "tools.h"
#include <stdio.h>

void install_pkg(const char* path) {
    printf("[!] Installing PKG: %s\n", path);
}

void extract_pkg(const char* path) {
    printf("[!] Extracting PKG contents to /dev_hdd0/game/...\n");
}

void decrypt_pkg(const char* path) {
    printf("[!] Decrypting retail PKG to debug format...\n");
}
