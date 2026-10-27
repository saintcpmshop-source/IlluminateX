#include "tools.h"
#include <stdio.h>

void pkg_install(const char* path) {
    printf("[!] Installing PKG: %s\n", path);
}

void pkg_extract(const char* path) {
    printf("[!] Extracting PKG: %s\n", path);
}

void pkg_decrypt(const char* path) {
    printf("[!] Decrypting PKG: %s\n", path);
}

void pkg_merge_split_files(const char* base_name) {
    printf("[!] Merging split files for: %s\n", base_name);
}

void pkg_install_rap(const char* rap_path) {
    printf("[!] Installing RAP License: %s\n", rap_path);
}

void pkg_install_edat(const char* edat_path) {
    printf("[!] Installing EDAT file: %s\n", edat_path);
}
