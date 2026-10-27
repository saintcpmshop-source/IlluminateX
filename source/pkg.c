#include "tools.h"
#include <stdio.h>

void pkg_install(const char* path) {
    printf("[!] Installing PKG: %s\n", path);
}

void pkg_extract(const char* path) {
    printf("[!] Extracting PKG files...\n");
}

void pkg_decrypt(const char* path) {
    printf("[!] Decrypting Retail PKG using Console ID...\n");
}
