
#include <stdio.h>
#include <stdlib.h>

#define ANSI_RED_BOLD "\033[31m\033[1m"
#define ANSI_RESET "\033[0m"

int main(){

    printf("Hello World\n");
    printf(ANSI_RED_BOLD "This text is RED!" ANSI_RESET "\n");

    return 0;
}