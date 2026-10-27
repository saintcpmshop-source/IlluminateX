#include "tools.h"
#include <stdio.h>
#include <sysutil/sysutil.h>

int main(int argc, char *argv[]) {
    sysUtilInit();
    printf("==========================================\n");
    printf("       IlluminateX - Ultimate System      \n");
    printf("==========================================\n");

    hw_set_fan_auto();
    net_start_ftp();

    while(1) {
        sysUtilCheckCallback();
    }
    return 0;
}
