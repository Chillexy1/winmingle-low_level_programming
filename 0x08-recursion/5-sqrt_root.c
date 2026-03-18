#include "main.h"

/*
*Authour: Chillexy Steven
*Program: WinMingle Community C Training
*Description: checks for the root of our sqrt to percorm the sqrt itself
*/

int _sqrt_root(int n, int root){
    if((root * root) == n)
        return root;

    if((root * root) > n)
        return -1;

    return _sqrt_root(n, root + 1);
}
