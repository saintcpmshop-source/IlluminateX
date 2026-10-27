#include "tools.h"
#include <stdio.h>
#include <rsx/rsx.h>
#include <rsx/gcm_sys.h>
#include <sysutil/video.h>

gcmContextData *context;
videoConfiguration vconfig;

void init_graphics() {
    printf("[!] Initializing RSX Graphics Engine...\n");
    videoState state;
    videoGetState(0, 0, &state);
    videoGetResolution(state.displayMode.resolution, &vconfig);
    
    void *host_addr = memalign(1024*1024, 1024*1024);
    rsxInit(&context, 1024*1024, 1024*1024, host_addr);
}

void draw_dashboard() {
    printf("[!] Drawing IlluminateX Dashboard to Screen...\n");
    // RSX drawing commands go here (colors, boxes, text)
}

void close_graphics() {
    rsxFinish(context, 1);
}
