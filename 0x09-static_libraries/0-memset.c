#include "main.h"

char *_memset(char *s, char b, unsigned int n){
    unsigned int i = 0;

    char *p = s;

    while(i < n){
        p[i] = b;

        i++;
    }
    return s;

}
