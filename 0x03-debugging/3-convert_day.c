#include "main.h"
#include <stdio.h>

/*
*Authour: Chillexy Steven  
*Program: WinMingle Community C Training
*Description: we use this function to calculate the days in the specified month.
*/

int convert_days(int month, int day, int year){
    int days_in_month[] = {31,28,31,30,31,30,31,31,30,31,30,31};

    int total = 0;
    int i = 0;

    if((year %4 == 0 && year %100 != 0) || (year %400 == 0)){
        days_in_month[1] = 29;
    }
    while(i < month - 1){
        total += days_in_month[i];

        i++;
    }
    return total + day;

}
