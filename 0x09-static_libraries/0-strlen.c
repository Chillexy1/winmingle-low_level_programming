#include "main.h"

int _strlen(char *s){
    int count = 0;
    while(s[count]){
        count++;
    }
    return count;

}
