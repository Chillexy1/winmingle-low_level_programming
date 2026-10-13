#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    char s[15];
    srand(time(NULL));

    print_crackme(s);

    return(0);
}
