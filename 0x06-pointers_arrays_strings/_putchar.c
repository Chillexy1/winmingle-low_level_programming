#include "main.h"
#include <unistd.h>

/*
 * function to call _putchar
 * */

int _putchar(char c){
    return write(1, &c, 1);
}
