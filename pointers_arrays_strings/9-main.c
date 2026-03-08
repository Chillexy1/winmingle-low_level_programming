#include "main.h"
#include <string.h>

/*
 * main function to call our prototypes
 * */

int main(void) {
    char *src= "First, solve the problem. Then, write the code";
    int lens = _len(src);
    char dest[lens+1];
    _strcpy(dest, src);

    return (0);
}
