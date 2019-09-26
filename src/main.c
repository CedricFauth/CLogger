
#include <stdio.h>
#include <stdlib.h>

#include "logger.h"

int main(){

    printf("Hello World\n");

    set_log_level(INFO);
    
    log_info("This is an information");
    log_warn("Here is a warning");
    log_err("Oh no that's an error");

    return 0;
}