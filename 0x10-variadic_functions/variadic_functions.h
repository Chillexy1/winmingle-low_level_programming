#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_

#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

typedef struct print_types{ //struct to work with 3-get_format
    char *type;
    void (*f)(va_list *);
}print_type;

void print_char(va_list *args);
void print_int(va_list *args);
void print_float(va_list *args);
void print_string(va_list *args);

#endif
