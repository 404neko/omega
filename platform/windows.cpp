

#include "windows.h"



void disable_sleep(){
    SetThreadExecutionState(ES_SYSTEM_REQUIRED | ES_DISPLAY_REQUIRED | ES_CONTINUOUS);
}

void enable_sleep(){
    SetThreadExecutionState(ES_CONTINUOUS);
}

