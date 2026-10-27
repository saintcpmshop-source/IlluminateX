#include "tools.h"
#include <stdio.h>
#include <sysutil/sysutil.h>

int main(int argc, char *argv[]) {
    sysUtilInit();
    printf("==========================================\n");
    printf("   IlluminateX - Supreme Ultimate Toolkit \n");
    printf("==========================================\n\n");

    // Boot network for web UI
    net_start_ftp();

    // Main Kernel Loop
    while(1) {
        sysUtilCheckCallback();
    }
    return 0;
}
