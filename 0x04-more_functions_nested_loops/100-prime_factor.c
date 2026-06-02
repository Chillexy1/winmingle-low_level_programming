#include <stdio.h>

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: this function prints out the largest prime factor of a given
 * number
 */

int main(void) {
  // unsigned long count;
  unsigned long number;
  // unsigned long largest_prime_factor;
  unsigned long i;
  // int ISPRIME;

  i = 2;
  // largest_prime_factor = 0;
  // count = 2;
  // number = 1231952;
  number = 612852475143;

  while (i * i <= number) {
    if (number % i == 0) {
      number /= i;
    } else
      i++;
  }

  printf("%lu\n", number);

  /*  while (count <= number) {
      if (number % count == 0) {

        ISPRIME = 1;
        i = 2;
        while (i < count) {
          if (count % i == 0) // checks if it's prime
          {
            ISPRIME = 0;
            break;
          }

          i++;
        }

        if (ISPRIME)
          largest_prime_factor = count;
      }

      count++;
    }
    printf("%lu\n", largest_prime_factor);*/

  return (0);
}
