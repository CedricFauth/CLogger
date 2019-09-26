#include <stdio.h>
#include "logger.h"

#define BOLD "\033[1m"
#define ORANGE "\033[33m\033[1m"
#define RED "\033[31m\033[1m"
#define RESET "\033[0m"

static LogLevel LEVEL = ERROR;

void set_log_level(LogLevel new_level){
    LEVEL = new_level;
}

void log_info(char* msg){
    if(INFO >= LEVEL) printf("%s[INFO]%s %s\n", BOLD, RESET, msg);
}

void log_warn(char* msg){
    if(INFO >= LEVEL) printf("%s[WARNING]%s %s\n",ORANGE, RESET,msg);
}

void log_err(char* msg){
    if(INFO >= LEVEL) printf("%s[ERROR] %s%s%s%s\n",RED, RESET, BOLD, msg, RESET);
}

void log_err_detail(char* msg, char* detail, int pos){

    if(INFO >= LEVEL){
        log_err(msg);
        for(int i = 0; i < pos + 8; i++){printf(" ");}
        printf("%s^---%s%s\n", RED, detail, RESET);
    }

}
