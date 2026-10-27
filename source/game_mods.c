#include "tools.h"
#include <stdio.h>

void game_patch_eboot(const char* path) { printf("[!] Patching EBOOT: %s\n", path); }
void game_inject_dlc(const char* path) { printf("[!] Injecting DLC: %s\n", path); }
void game_decrypt_save(const char* path) { printf("[!] Decrypting Save: %s\n", path); }
void game_unlock_trophies(const char* path) { printf("[!] Unlocking Trophies: %s\n", path); }
