#include "main.h"

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: PRINTF PROJECT: this a function that lroduces output according to
 * a format
 */

int _printf(const char *format, ...) {
  int i, j;
  int count = 0;
  char buffer[BUFFER];
  int index = 0;
  int found = 0;
  int plus_flag = 0;
  int harsh_flag = 0;
  int lng = 0;
  int shrt = 0;
  int width = 0;
  int precision = 0;
  int got_precision = 0;
  int zero_flag = 0;
  int n_flag = 0;

  data_type specifier[] = {
      {"p", print_address},        {"S", print_STR},    {"x", print_hex},
      {"R", prints_rot_13_ed_str}, {"X", print_HEX},    {"o", print_octal},
      {"u", print_unsign},         {"b", print_binary}, {"c", print_char},
      {"s", print_string},         {"i", print_int},    {"d", print_int},
      {"r", reverse_string},       {NULL, NULL},
  };

  va_list args;
  va_start(args, format);

  i = 0;
  while (format &&
         format[i]) /* go through every strings character by character */ {
    if (format[i] == '%') {
      i++;
      /*resets flags*/
      plus_flag = 0;
      harsh_flag = 0;
      lng = 0;
      shrt = 0;
      width = 0;
      precision = 0;
      got_precision = 0;
      zero_flag = 0;
      n_flag = 0;
      found = 0;

      /* loop through every format specifier */
      while (format[i]) {
        /* checks for lenght modifier of l*/
        if (format[i] == 'l') {
          lng = 1;

          i++;
        }

        /* negative flsg(n_flag) parser */
        else if (format[i] == '-') {
          n_flag = 1;
          i++;
        }

        /* zero flag parser */
        else if (format[i] == '0') {
          zero_flag = 1;
          i++;
        }

        /* precision implimentation*/
        else if (format[i] == '.') {
          i++;

          got_precision = 1;

          precision = 0;

          while (format[i] >= '0' && format[i] <= '9') {
            precision = precision * 10 + (format[i] - '0');

            i++;
          }
        }

        /* check and calculate the width*/
        else if (format[i] >= '0' && format[i] <= '9') {
          width = 0; // resets the width whenever an output is produced
          while (format[i] >= '0' && format[i] <= '9') {
            width = width * 10 + (format[i] - '0');

            i++;
          }
        }

        /* checks for length modifier of h */
        else if (format[i] == 'h') {
          shrt = 1;
          i++;
        }

        /* checks for + flag*/
        else if (format[i] == '+') {
          plus_flag = 1;
          i++;
        }

        /* checks for # flag checks for # flag */
        else if (format[i] == '#') {
          harsh_flag = 1;
          i++;
        }
        /*skip the loop */
        else
          break;
      }
      j = 0;
      /* loop through specifirs*/
      while (specifier[j].types) {
        if (format[i] == *specifier[j].types) {
          specifier[j].f(&args, buffer, &index, &plus_flag, &harsh_flag, &lng,
                         &shrt, &width, &precision, &got_precision, &zero_flag,
                         &n_flag);

          found = 1; // found a matching specifier
          break;     // countinue searching
        }

        j++;
      }
      if (!found)
        store_buffer(format[i], buffer, &index);
    }
    /* prints characters/strings if no format specifier is found*/
    else
      store_buffer(format[i], buffer, &index);
    count++;
    i++;
  }

  va_end(args);
  flush_buffer(buffer, &index); // flushed the buffer
  return (count);
}
