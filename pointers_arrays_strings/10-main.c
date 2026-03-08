#include "main.h"
#include <stdlib.h>

int main(void){
    char *s[] = {"98", "-402", "-98", "214748364", "0", "402", "98", "402"};
    int n = sizeof(s)/sizeof(s[0]);
    int result,i = 0;

    while(i < n){
        result = _atoi(s[i]);
        print_numbers(result);
        _putchar('\n');

        i++;
    }

    
    return 0;
}
