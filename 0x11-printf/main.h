#ifndef _MAIN_H
#define _MAIN_H
#define BUFFER 1024

#include <string.h>
#include <stdarg.h>

typedef struct type{
    char *types;
    void (*f)(va_list *, char *, int *, int *, int *, int *, int *,int *, int *, int *, int *, int *);

}data_type;

int _printf(const char *format, ...);

void prints_rot_13_ed_str(va_list *args, char *buffer, int *index, int *plus_flag, int *harsh_flag, int *lng, int *shrt,int *width, int *precision, int *got_precision, int *zero_flag, int *n_flag);

void print_char(va_list *args, char *buffer, int *index, int *plus_flag, int *harsh_flag, int *lng, int *shrt,int *width, int *precision, int *got_precision, int *zero_flag, int *n_flag);

void print_string(va_list *args, char *buffer, int *index, int *plus_flag, int *harsh_flag, int *lng, int *shrt,int *width, int *precision, int *got_precision, int *zero_flag, int *n_flag);

void print_int(va_list *args, char *buffer, int *index, int *plus_flag,  int *harsh_flag, int *lng, int *shrt,int *width, int *precision, int *got_precision, int *zero_flag, int *n_flag);

void print_binary(va_list *args, char *buffer, int *index, int *plus_flag,  int *harsh_flag,int *lng, int *shrt,int *width, int *precision, int *got_precision, int *zero_flag, int *n_flag);

void print_unsign(va_list *args, char *buffer, int *index, int *plus_flag,  int *harsh_flag, int *lng, int *shrt,int *width, int *precision, int *got_precision, int *zero_flag, int *n_flag);

void print_octal(va_list *args, char *buffer, int *index, int *plus_flag,  int *harsh_flag, int *lng, int *shrt,int *width, int *precision, int *got_precision, int *zero_flag, int *n_flag);

void print_hex(va_list *args, char *buffer, int *index, int *plus_flag,  int *harsh_flag, int *lng, int *shrt,int *width, int *precision, int *got_precision, int *zero_flag, int *n_flag);

void print_HEX(va_list *args, char *buffer, int *index, int *plus_flag,  int *harsh_flag, int *lng, int *shrt,int *width, int *precision, int *got_precision, int *zero_flag, int *n_flag);

void print_STR(va_list *args, char *buffer, int *index, int *plus_flag,  int *harsh_flag, int *lng, int *shrt,int *width, int *precision, int *got_precision, int *zero_flag, int *n_flag);

void print_address(va_list *args, char *buffer, int *index, int *plus_flag,  int *harsh_flag, int *lng, int *shrt,int *width, int *precision, int *got_precision, int *zero_flag, int *n_flag);

void reverse_string(va_list *args, char *buffer, int *index, int *plus_flag,  int *harsh_flag, int *lng, int *shrt,int *width, int *precision, int *got_precision, int *zero_flag, int *n_flag);

void _print_HEX_LNG(unsigned long n, char *buffer, int *index);
void _print_hex_lng(unsigned long n, char *buffer, int *index);
void _print_hex_int(unsigned int n, char *buffer, int *index);
void _print_HEX_INT(unsigned int n, char *buffer, int *index);
void print_number(int n,char *buffer, int *index);
void print_rot13_str(char *ch,int count, char *buffer, int *index);
void print_oct_lng(unsigned long n,char *buffer, int *index);
void print_oct_int(unsigned int n,char *buffer, int *index);
void print_unsigned_int(unsigned int n, char *buffer, int *index);
void print_unsigned_lng(unsigned long n, char *buffer, int *index);
void print_lng_int(long n, char *buffer, int *index);
void print_bin(unsigned long n,char *buffer, int *index);
void store_buffer(char c, char *buffer, int *index);
void flush_buffer(char *buffer, int *index);
int string_len(char *str);
int base_len(unsigned long n, unsigned long base);
int unsigned_int_len(unsigned int n, unsigned int base);
int unsigned_lng_len(unsigned long n, unsigned long base);
int long_len(long n);
int int_len(int n);
int S_len(char *str);
int precision_len(int n);
#endif /* ends the main.h */
