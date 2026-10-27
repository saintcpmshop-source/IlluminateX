#include "tools.h"
#include <stdio.h>
#include <sysutil/sysutil.h>

int main(int argc, char *argv[]) {
    sysUtilInit();
    
    printf("==========================================\n");
    printf("       IlluminateX - Ultimate Toolkit     \n");
    printf("==========================================\n\n");

    init_graphics();
    draw_dashboard();
    hw_set_fan_auto();
    net_start_ftp();

    while(1) {
        sysUtilCheckCallback();
    }

    close_graphics();
    return 0;
}
