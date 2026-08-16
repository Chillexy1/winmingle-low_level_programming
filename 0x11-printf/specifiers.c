#include "main.h"
/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: this section contains every conversion of specifiers needed for
 * out _printf project
 */

/*prints rot13ed_string */
void prints_rot_13_ed_str(va_list *args, char *buffer, int *index,
                          int *plus_flag, int *harsh_flag, int *lng, int *shrt,
                          int *width, int *precision, int *got_precision,
                          int *zero_flag, int *n_flag) {

  // print_rot13_str(c, buffer, index);
  int i, k = 0, j = 0;
  int padding = 0;
  int len;
  int space = 0;
  int str_len;

  char *c = va_arg(*args, char *);

  /* unused flags*/
  (void)plus_flag;
  (void)harsh_flag;
  (void)lng;
  (void)shrt;
  (void)got_precision;
  (void)zero_flag;

  if (c == NULL)
    return;
  len = string_len(c); /* get length of the string*/
  /* padd the string output if a width is given*/

  /* width with precision implimentation */
  if (*width > 0 && *precision > 0) {

    /* determine number of charactee to print out*/
    if (len > *precision)
      str_len = *precision;

    else
      str_len = len;

    /* computes how many spaces to print*/
    space = *width - str_len;
    if (space < 0)
      space = 0;

    /* checks if negative flag is present/specified */
    if (*n_flag) {
      // prints the strings first
      print_rot13_str(c, str_len, buffer, index);

      // prints the space(width) second cause precision is ignored for strings
      while (space-- > 0)
        store_buffer(' ', buffer, index);
    }
    /* otherwise if the negative flag isn't specified*/
    else {
      while (k < space) { // padd
        store_buffer(' ', buffer, index);
        k++;
      }
      print_rot13_str(c, str_len, buffer, index);
    }
  }

  /* impliment code if precision is '0' */
  else if (*got_precision) {
    if (*precision > len)
      str_len = len;
    else
      str_len = *precision;

    padding = *width - str_len;

    /*if negative flag is not specified print space first */
    if (!*n_flag) {
      while (padding-- > 0)
        store_buffer(' ', buffer, index);
    }
    /* then print the required string */
    print_rot13_str(c, str_len, buffer, index);

    /* prints the space if the negative was specified */
    if (*n_flag) {
      while (padding-- > 0)
        store_buffer(' ', buffer, index);
    }
  }

  else if (*width > 0) {
    /* prints all string if length of string is greater than the given width*/
    if (len >= *width)
      print_rot13_str(c, len, buffer, index);

    /* padd the output if length of string is lower*/
    else {
      padding = *width - len;
      /* negative flag implimentation if specified */
      if (*n_flag) {
        // prints the string first
        i = len;
        print_rot13_str(c, i, buffer, index);

        // prints the width since precision is ignored in strings
        while (k < padding) {
          store_buffer(' ', buffer, index); /* end of width implimentation */
          k++;
        }

      }
      /*if negative flag is not specified */
      else {
        while (k < padding) {
          store_buffer(' ', buffer, index); /* end of width implimentation */
          k++;
        }
        i = len;
        print_rot13_str(c, i, buffer, index);
      }
    }
  }

  /* precision implimentation */
  else if (*precision > 0) {
    if (*precision <= len) {
      j = (*precision);

      print_rot13_str(c, j, buffer, index);

    }

    else if (*precision > len) {
      *precision = len;
      j = (*precision);

      print_rot13_str(c, j, buffer, index);
    }
  }
  /* prints the string if no width is given */
  else {
    print_rot13_str(c, len, buffer, index);
  }
}

/* reverse string */
void reverse_string(va_list *args, char *buffer, int *index, int *plus_flag,
                    int *harsh_flag, int *lng, int *shrt, int *width,
                    int *precision, int *got_precision, int *zero_flag,
                    int *n_flag) {

  int i, k = 0, j = 0;
  int padding = 0;
  int len;
  int space = 0;
  int str_len;

  char *c = va_arg(*args, char *);

  /* unused flags*/
  (void)plus_flag;
  (void)harsh_flag;
  (void)lng;
  (void)shrt;
  (void)got_precision;
  (void)zero_flag;

  if (c == NULL)
    return;
  len = string_len(c); /* get length of the string*/
  /* padd the string output if a width is given*/

  /* width with precision implimentation */
  if (*width > 0 && *precision > 0) {

    /* determine number of charactee to print out*/
    if (len > *precision)
      str_len = *precision;

    else
      str_len = len;

    /* computes how many spaces to print*/
    space = *width - str_len;
    if (space < 0)
      space = 0;

    /* checks if negative flag is present/specified */
    if (*n_flag) {
      // prints the reverse string first
      for (k = str_len - 1; k >= 0; k--)
        store_buffer(c[k], buffer, index);

      // prints the space(width) last
      while (space-- > 0)
        store_buffer(' ', buffer, index);
    }
    /* otherwise if the negative flag isn't specified*/
    else {
      while (k < space) { // padd
        store_buffer(' ', buffer, index);
        k++;
      }

      for (k = str_len - 1; k >= 0; k--)
        store_buffer(c[k], buffer, index);
    }
  }

  /* impliment code if precision is '0' */
  else if (*got_precision) {
    if (*precision > len)
      str_len = len;
    else
      str_len = *precision;

    padding = *width - str_len;

    /*if negative flag is not specified print space first */
    if (!*n_flag) {
      while (padding-- > 0)
        store_buffer(' ', buffer, index);
    }
    /* then print the required string in reverse */
    k = str_len;
    while (k > 0) {
      store_buffer(c[k], buffer, index);
      k--;
    }

    /* prints the space if the negative was specified */
    if (*n_flag) {
      while (padding-- > 0)
        store_buffer(' ', buffer, index);
    }
  }

  else if (*width > 0) {
    /* prints all string if length of string is greater than the given width*/
    if (len >= *width) {
      while (len >= 0) {

        store_buffer(c[len], buffer, index);
        len--;
      }
    }

    /* padd the output if length of string is lower*/
    else {
      padding = *width - len;
      /* negative flag implimentation if specified */
      if (*n_flag) {
        // prints the string first
        for (i = len; i >= 0; i--)
          store_buffer(c[i], buffer, index);

        // prints the width since precision is ignored in strings
        while (k < padding) {
          store_buffer(' ', buffer, index); /* end of width implimentation */
          k++;
        }

      }
      /*if negative flag is not specified */
      else {
        while (k < padding) {
          store_buffer(' ', buffer, index); /* end of width implimentation */
          k++;
        }
        for (i = len; i >= 0; i--)
          store_buffer(c[i], buffer, index);
      }
    }
  }

  /* precision implimentation */
  else if (*precision > 0) {
    if (*precision <= len) {
      j = *precision;
      while (j > 0) {
        store_buffer(c[j], buffer, index);
        j--;
      }
    }

    else if (*precision > len) {
      *precision = len;
      j = *precision;
      while (j > 0) {
        store_buffer(c[j], buffer, index);
        j--;
      }
    }
  }
  /* prints the string if no width is given */
  else {
    for (i = len; i >= 0; i--) {
      store_buffer(c[i], buffer, index);
    }
  }
}

/* char */
void print_char(va_list *args, char *buffer, int *index, int *plus_flag,
                int *harsh_flag, int *lng, int *shrt, int *width,
                int *precision, int *got_precision, int *zero_flag,
                int *n_flag) {

  int padding = 0;
  int i = 0;

  char c = va_arg(*args, int);

  /* unused flags*/
  (void)plus_flag;
  (void)harsh_flag;
  (void)lng;
  (void)shrt;
  (void)zero_flag;
  (void)got_precision;
  (void)precision; // skips precision

  if (*width > 0) {
    padding = *width - 1;

    /* check if '-' flag is present and impliment it */
    if (*n_flag) {
      store_buffer(c, buffer, index);

      while (padding-- > 0)
        store_buffer(' ', buffer, index);
    } else {
      /* skip '-' flag if not specigied */
      while (i < padding) {
        store_buffer(' ', buffer, index);
        i++;
      }
      store_buffer(c, buffer, index);
    }
  }

  else
    store_buffer(c, buffer, index);
}

/* string */
void print_string(va_list *args, char *buffer, int *index, int *plus_flag,
                  int *harsh_flag, int *lng, int *shrt, int *width,
                  int *precision, int *got_precision, int *zero_flag,
                  int *n_flag) {
  int i, k = 0, j = 0;
  int padding = 0;
  int len;
  int space = 0;
  int str_len;

  char *c = va_arg(*args, char *);

  /* unused flags*/
  (void)plus_flag;
  (void)harsh_flag;
  (void)lng;
  (void)shrt;
  (void)got_precision;
  (void)zero_flag;

  if (c == NULL)
    return;
  len = string_len(c); /* get length of the string*/
  /* padd the string output if a width is given*/

  /* width with precision implimentation */
  if (*width > 0 && *precision > 0) {

    /* determine number of charactee to print out*/
    if (len > *precision)
      str_len = *precision;

    else
      str_len = len;

    /* computes how many spaces to print*/
    space = *width - str_len;
    if (space < 0)
      space = 0;

    /* checks if negative flag is present/specified */
    if (*n_flag) {
      // prints the strings first
      for (k = 0; k < str_len; k++)
        store_buffer(c[k], buffer, index);

      // prints the space(width) second cause precision is ignored for strings
      while (space-- > 0)
        store_buffer(' ', buffer, index);
    }
    /* otherwise if the negative flag isn't specified*/
    else {
      while (k < space) { // padd
        store_buffer(' ', buffer, index);
        k++;
      }

      for (k = 0; k < str_len; k++)
        store_buffer(c[k], buffer, index);
    }
  }

  /* impliment code if precision is '0' */
  else if (*got_precision) {
    if (*precision > len)
      str_len = len;
    else
      str_len = *precision;

    padding = *width - str_len;

    /*if negative flag is not specified print space first */
    if (!*n_flag) {
      while (padding-- > 0)
        store_buffer(' ', buffer, index);
    }
    /* then print the required string */
    while (k < str_len) {
      store_buffer(c[k], buffer, index);
      k++;
    }

    /* prints the space if the negative was specified */
    if (*n_flag) {
      while (padding-- > 0)
        store_buffer(' ', buffer, index);
    }
  }

  else if (*width > 0) {
    /* prints all string if length of string is greater than the given width*/
    if (len >= *width) {
      for (i = 0; c[i]; i++)
        store_buffer(c[i], buffer, index);
    }

    /* padd the output if length of string is lower*/
    else {
      padding = *width - len;
      /* negative flag implimentation if specified */
      if (*n_flag) {
        // prints the string first
        for (i = 0; c[i]; i++)
          store_buffer(c[i], buffer, index);

        // prints the width since precision is ignored in strings
        while (k < padding) {
          store_buffer(' ', buffer, index); /* end of width implimentation */
          k++;
        }

      }
      /*if negative flag is not specified */
      else {
        while (k < padding) {
          store_buffer(' ', buffer, index); /* end of width implimentation */
          k++;
        }
        for (i = 0; c[i]; i++)
          store_buffer(c[i], buffer, index);
      }
    }
  }

  /* precision implimentation */
  else if (*precision > 0) {
    if (*precision <= len) {
      while (j < *precision) {
        store_buffer(c[j], buffer, index);
        j++;
      }
    }

    else if (*precision > len) {
      *precision = len;
      while (j < *precision) {
        store_buffer(c[j], buffer, index);
        j++;
      }
    }
  }
  /* prints the string if no width is given */
  else {
    for (i = 0; c[i]; i++) {
      store_buffer(c[i], buffer, index);
    }
  }
}

/* integer */
void print_int(va_list *args, char *buffer, int *index, int *plus_flag,
               int *harsh_flag, int *lng, int *shrt, int *width, int *precision,
               int *got_precision, int *zero_flag, int *n_flag) {
  int padding = 0;
  int digits;
  int i = 0;
  int total;
  int space = 0;
  int zeros = 0;

  long n;
  if (*lng)
    n = va_arg(*args, long);
  else if (*shrt)
    n = (short)va_arg(*args, int);
  else
    n = va_arg(*args, int);

  /* unused flags */
  (void)harsh_flag;
  (void)n_flag;

  /* empty output if specifiers where empty/0 */
  if ((*zero_flag || *got_precision) && *precision == 0 && n == 0) {
    if (!*n_flag) // padd output with '0' if no negative flag was specified
    {
      while (i < *width) {
        store_buffer('0', buffer, index);
        i++;
      }
    }
    /*padd with space if otherwise N.B:for now */
    else {
      while (i < *width) {
        store_buffer(' ', buffer, index);
        i++;
      }
    }
  }

  /* zero_flag and precision implimentation*/
  /* ignores zero_flag cause precision is present */
  else if (*zero_flag && *precision > 0 && *width > 0) {
    if (*n_flag) // handles the  negative flag if number is less than 0
      digits = precision_len(n);
    else
      digits = int_len(n); // get number of digits

    if (*precision > digits)
      zeros = *precision - digits;

    total = zeros + digits;

    if (n < 0)
      total++; // accounts space for '-'

    if (*width > total)
      space = *width - total; // handles padding

    if (space < 0)
      space = 0;

    /* prints the results without a negative sign('-') if the negative flag is
     * not specified */
    if (!*n_flag) { //'-' not specified, prints space first
      while (i < space) {
        store_buffer(' ', buffer, index);
        i++;
      }
    }

    if (n < 0) {
      store_buffer('-', buffer, index);
      n = -n;
    }

    while (i < zeros) {
      store_buffer('0', buffer, index);
      i++;
    }
    print_number(n, buffer, index);
    /* but if the negative flag was specified */
    if (*n_flag) // prints the space when a negative flag('-') is been specified
    {
      while (space-- > 0)
        store_buffer(' ', buffer, index);
    }
  }

  /* when an empty input is given */
  else if (*got_precision && *precision == 0 && n == 0) {
    while (i < *width) {
      store_buffer(' ', buffer, index);
      i++;
    }
  }

  /* zero_flag and width implimentation*/
  else if (*zero_flag && *width > 0) {
    digits = int_len(n);

    if (*width > digits)
      zeros = *width - digits; // computs number of '0' to print

    else
      zeros = 0;

    total = zeros + digits; // total number of digits to print

    if (n < 0)
      total++; // '-'

    /* handle the '-' output before precision outputs*/
    if (n < 0) {
      store_buffer('-', buffer, index);
      n = -n;
    }

    /*check if negative flag wasn't specified padd with '0'*/
    if (!*n_flag) {
      while (i < zeros) {
        store_buffer('0', buffer, index);
        i++;
      }
    }
    print_number(n, buffer, index);
    /* if the negative flag was specifed the padd with space ' ' */
    if (*n_flag) {
      while (zeros-- > 0)
        store_buffer(' ', buffer, index);
    }
  }

  /* precision and width implimentation*/
  else if (*width > 0 && *precision > 0) {
    digits = precision_len(n); // get number of digits

    if (*precision > digits)
      zeros = *precision - digits;

    total = zeros + digits;

    if (n < 0)
      total++; // accounts space for '-'

    if (*width > total)
      space = *width - total; // handles padding

    if (space < 0)
      space = 0;

    /* print output without a negative flag(space first) */
    if (!*n_flag) {
      while (i < space) {
        store_buffer(' ', buffer, index);
        i++;
      }
    }

    if (n < 0) {
      store_buffer('-', buffer, index);
      n = -n;
    }

    i = 0;
    while (i < zeros) {
      store_buffer('0', buffer, index);
      i++;
    }
    print_number(n, buffer, index);
    /* prints the space last if negative flag was specified*/
    if (*n_flag)
      while (space-- > 0)
        store_buffer(' ', buffer, index);
  }

  /* width specifier implimentation for long data type*/
  else if (*lng && *width > 0) {
    digits = long_len(n);
    /* check if the digits are larger than the specified width*/
    if (digits >= *width)
      print_lng_int(n, buffer, index);

    /* if not then we padd*/
    else
      padding = *width - digits;

    /* padds with space first if negative flag isn't present*/
    if (!*n_flag) {
      while (i < padding) {
        store_buffer(' ', buffer, index);
        i++;
      }
    }

    print_lng_int(n, buffer, index);

    /*if negative is present then padd with space after*/
    if (*n_flag)
      while (padding-- > 0)
        store_buffer(' ', buffer, index);
  }
  /* handle the l length modifier integer values*/
  else if (*lng) {
    print_lng_int(n, buffer, index);
  }
  /* width modifier implementation for short data type */
  else if (*shrt && *width) {
    digits = int_len(n);
    /* print output if digit lengtg is greater than width */
    if (digits >= *width) {
      print_number(n, buffer, index);
    }
    /* if length is not greater then we padd before printing output */
    else {
      padding = *width - digits;
      /* padd with space first if negative flag isn't specified */
      if (!*n_flag) {
        /*padd */
        while (i < padding) {
          store_buffer(' ', buffer, index);
          i++;
        }
      }
      print_number(n, buffer, index); // then print the value
      /* padd with space later if negative flag was specified */
      if (*n_flag) {
        while (padding-- > 0)
          store_buffer(' ', buffer, index);
      }
    }
  }
  /* h modifier for int value*/
  else if (*shrt) {
    print_number(n, buffer, index);
  }

  /* precion only implimentation */
  else if (*precision > 0) {
    digits = precision_len(n);

    if (*precision > digits)
      zeros = *precision - digits; // computs number of '0' to print

    else
      zeros = 0;

    total = zeros + digits; // total number of digits to print

    if (n < 0)
      total++; // '-'

    /* handle the '-' output before precision outputs*/
    if (n < 0) {
      store_buffer('-', buffer, index);
      n = -n;
    }
    /* checks and padd output with '0' if negative flag isn't specified  */
    if (!*n_flag) {
      while (i < zeros) {
        store_buffer('0', buffer, index);
        i++;
      }
    }
    print_number(n, buffer, index); // then print the value

    /* if negative flag is present precision is padded with space(' ') not
     * zero(%0)  */
    if (*n_flag) {
      while (zeros-- > 0)
        store_buffer(' ', buffer, index);
    }
  }

  /* if not lenght modifier*/
  /* handles the + flag */
  else {
    /* padding if width and the '+' flag is specified*/
    if (*width > 0 && *plus_flag && n > 0) {
      digits = int_len(n);

      /* check if digit is greater than the specified width*/
      if (digits >= *width) {
        store_buffer('+', buffer, index);
      }

      /* if digit length is lower than width */
      else {

        padding = *width - (digits + 1);
        /* prints the space first if negtive flag isn't present */
        if (!*n_flag) {
          while (i < padding) {
            store_buffer(' ', buffer, index);
            i++;
          }
        }
        store_buffer('+', buffer, index);
      }
    }
    /* handle the width specifier only*/
    else if (*width > 0) {
      digits = int_len(n);

      /* checks if len is greater than width */
      if (digits >= *width)
        /* print all expected output */
        *width = digits;

      else { /* padd if len is lower*/

        padding = *width - digits;
        /* checks if negative flag isn't present */
        if (!*n_flag) {
          while (i < padding) {
            store_buffer(' ', buffer, index);
            i++;
          }
        }
      }
    }

    else if (*plus_flag && n > 0)
      store_buffer('+', buffer, index);

    print_number(n, buffer, index);

    /* prints the space last if the negative flag is present*/
    if (*n_flag) {
      while (padding-- > 0)
        store_buffer(' ', buffer, index);
    }
  }
}

/* binary value*/
void print_binary(va_list *args, char *buffer, int *index, int *plus_flag,
                  int *harsh_flag, int *lng, int *shrt, int *width,
                  int *precision, int *got_precision, int *zero_flag,
                  int *n_flag) {
  int padding = 0;
  int len;
  int i = 0;
  int zero = 0;
  int total;

  unsigned int n = va_arg(*args, unsigned int);
  /* unused flags*/
  (void)plus_flag;
  (void)harsh_flag;
  (void)lng;
  (void)shrt;
  (void)zero_flag;

  /* handled precision or number when either of them is '0'*/
  if (*got_precision && *precision == 0 && n == 0) {
    while (i < *width) {
      store_buffer(' ', buffer, index);
      i++;
    }
  }

  /* precision with width implimentation */
  else if (*precision > 0 && *width > 0) {
    len = unsigned_int_len(n, 2);

    /* determine the amount of space needed to padd with '0' */
    if (*precision > len)
      zero = *precision - len;

    else
      zero = 0;

    total = zero + len;

    /* padd with empty space for width implimentation*/
    if (*width > total)
      padding = *width - total;

    /* check if the negative flag is not present then padd normally with space
     * first */
    if (!*n_flag) {
      while (i < padding) {
        store_buffer(' ', buffer, index);
        i++;
      }
    }

    i = 0;
    while (i < zero) {
      store_buffer('0', buffer, index);
      i++;
    }
    print_bin(n, buffer, index); // then print out the value

    /* if negative flag is present we print the space last after the value is
     * printed out */
    if (*n_flag) {
      while (padding-- > 0)
        store_buffer(' ', buffer, index);
    }
  }

  /* precision implimentation only*/
  else if (*precision > 0) {
    len = unsigned_int_len(n, 2);

    /* computes the amount of space needed for precision padding('0')*/
    if (*precision > len)
      zero = *precision - len;

    else
      zero = 0;

    /* checks for negative flag, if not present, then we padd with '0' for
     * pricision first */
    if (!*n_flag) {
      /* padd with precision ('0') */
      while (i < zero) {
        store_buffer('0', buffer, index);
        i++;
      }
    }
    print_bin(n, buffer, index);
    /* but if negative flag is present we padd with '0' for precision after */
    if (*n_flag) {
      while (zero-- > 0)
        store_buffer('0', buffer, index);
    }

  }

  /* width implimentation */
  else if (*width > 0) {
    len = unsigned_int_len(n, 2);
    if (len >= *width)
      *width = len;

    /* if len is lower than width, we padd the outcome*/
    padding = *width - len;
    /* padd with empty spaces first if negative flag isn't specigied */
    if (!*n_flag) {
      while (i < padding) {
        store_buffer(' ', buffer, index);
        i++;
      }
    }
    print_bin(n, buffer, index);
    /* padd with spaces after values have been printed when the negative flag iz
     * specified */
    if (*n_flag) {
      while (padding-- > 0)
        store_buffer(' ', buffer, index);
    }

  }

  /* if no specifier  */
  else
    print_bin(n, buffer, index);
}

/* unsigned value*/
void print_unsign(va_list *args, char *buffer, int *index, int *plus_flag,
                  int *harsh_flag, int *lng, int *shrt, int *width,
                  int *precision, int *got_precision, int *zero_flag,
                  int *n_flag) {
  int padding = 0;
  int i = 0;
  int len;
  int zero = 0;
  int total = 0;

  unsigned long n;
  if (*lng)
    n = va_arg(*args, unsigned long);
  else if (*shrt)
    n = (unsigned short)va_arg(*args, unsigned int);
  else
    n = va_arg(*args, unsigned int);

  /* unused flags*/
  (void)plus_flag;
  (void)harsh_flag;
  (void)n_flag;

  /* implimentation if an empty specifiers where to be given */
  if (*zero_flag && *got_precision && precision == 0 && n == 0) {
    while (i < *width) {
      store_buffer('0', buffer, index);
      i++;
    }
  }

  /* zero_flag and precision implimentation */
  /* ignores the zero_flag and perfom precision cause precision is present */
  else if (*zero_flag && *precision > 0 && *width > 0) {
    len = unsigned_int_len(n, 10);

    /* determine the amount of space needed to padd with '0' */
    if (*precision > len)
      zero = *precision - len;
    else
      zero = 0;

    total = zero + len;

    /* ge! the amount of space needed to be padded*/
    if (*width > total)
      padding = *width - total;

    /* if negative flag is not specified, padd normally */
    if (!*n_flag) {
      /*padding with width first */
      while (i < padding) {
        store_buffer(' ', buffer, index);
        i++;
      }
    }

    i = 0;
    while (i < zero) {
      store_buffer('0', buffer, index);
      i++;
    }
    print_unsigned_int(n, buffer, index);

    /* but if the negative flag is specified, padd with space after all values
     * are printed */
    if (*n_flag) {
      while (padding-- > 0)
        store_buffer(' ', buffer, index);
    }
  }

  /* check if no digit was given to any specifier of type */
  else if (*got_precision && *precision == 0 && n == 0) {
    while (i < *width) {
      store_buffer(' ', buffer, index);
      i++;
    }
  }

  /* precision with wodth implimentation */
  else if (*precision > 0 && *width > 0) {
    len = unsigned_int_len(n, 10);

    /* determine the amount of space needed to padd with '0' */
    if (*precision > len)
      zero = *precision - len;
    else
      zero = 0;

    total = zero + len;

    /* padd with empty space for width implimentation*/
    if (*width > total)
      padding = *width - total;

    /* padd with space first if no negative flag was specified */
    if (!*n_flag) {
      /*padding with width first */
      while (i < padding) {
        store_buffer(' ', buffer, index);
        i++;
      }
    }

    i = 0;
    while (i < zero) {
      store_buffer('0', buffer, index);
      i++;
    }
    print_unsigned_int(n, buffer, index);
    /* but padds with space last if negative flag was specified */
    if (*n_flag) {
      while (padding-- > 0)
        store_buffer(' ', buffer, index);
    }
  }

  /* zero_flag implimentation for unsigned value */
  else if (*zero_flag && *width > 0) {
    len = unsigned_int_len(n, 10);

    if (*width > len)
      padding = *width - len;

    if (padding < 0)
      padding = 0;

    /* if no negative flag is specified, padds with '0' first*/
    if (!*n_flag) {
      while (i < padding) {
        store_buffer('0', buffer, index);
        i++;
      }
    }
    print_unsigned_int(n, buffer, index);
    /* ignores the 0 flag and padds with space(' ') if negative flag was to be
     * specified */
    if (*n_flag) {
      while (padding-- > 0)
        store_buffer(' ', buffer, index);
    }

  }
  /* handle width and l if both were specified */
  else if (*width > 0 && *lng) {
    len = unsigned_lng_len(n, 10);

    if (len >= *width)
      *width = len;
    else {
      padding = *width - len;

      if (!*n_flag) // prints space first if negative flag wasn't specified
      {
        while (i < padding) {
          store_buffer(' ', buffer, index);
          i++;
        }
      }
    }
    print_unsigned_lng(n, buffer, index);
    if (*n_flag) // prints space last if negative flag is specified
    {
      while (padding-- > 0)
        store_buffer(' ', buffer, index);
    }
  }
  /* handles the l length modifie for unsigned values*/
  else if (*lng) {
    print_unsigned_lng(n, buffer, index);
  }

  /* handles the specifier of width and 'h' if both specified*/
  else if (*width > 0 && *shrt) {
    len = unsigned_int_len(n, 10);

    if (len >= *width)
      *width = len;
    else {
      padding = *width - len;

      if (!*n_flag) // prints spsce first if no negative flag
      {
        while (i < padding) {
          store_buffer(' ', buffer, index);
          i++;
        }
      }
    }
    print_unsigned_int(n, buffer, index);
    if (*n_flag) // prints space last if negative flag is specified
    {
      while (padding-- > 0)
        store_buffer(' ', buffer, index);
    }
  }

  /* h modifier for unsigned value*/
  else if (*shrt) {
    print_unsigned_int(n, buffer, index);
  }

  /* width only implimentation for unsigned short*/
  else if (*width > 0) {
    len = unsigned_int_len(n, 10);

    if (len >= *width)
      *width = len;
    else {
      padding = *width - len;

      if (!*n_flag) // padds with space first if no negative flag
      {
        while (i < padding) {
          store_buffer(' ', buffer, index);
          i++;
        }
      }
    }
    print_unsigned_int(n, buffer, index);

    if (*n_flag) // padd with space last if negative flag is specified
    {
      while (padding-- > 0)
        store_buffer(' ', buffer, index);
    }
  }

  /* precision implimentation only*/
  else if (*precision > 0) {
    len = unsigned_int_len(n, 10);

    /* computes the amount of space needed for precision padding('0')*/
    if (*precision > len)
      zero = *precision - len;

    else
      zero = 0;

    if (!*n_flag) // padds with '0' first if no negative flag for precision
    {
      /* padd with precision ('0') */
      while (i < zero) {
        store_buffer('0', buffer, index);
        i++;
      }
    }
    print_unsigned_int(n, buffer, index);
    if (*n_flag) // padds with '0' last if there was a negative flag specified
    {
      while (zero-- > 0)
        store_buffer('0', buffer, index);
    }
  }

  /* if no specifier was indicated */
  else
    print_unsigned_int(n, buffer, index);
}

/* octal value */
void print_octal(va_list *args, char *buffer, int *index, int *plus_flag,
                 int *harsh_flag, int *lng, int *shrt, int *width,
                 int *precision, int *got_precision, int *zero_flag,
                 int *n_flag) {

  int padding = 0;
  int i = 0;
  int len;
  int zero = 0;
  int total = 0;

  unsigned long n;

  if (*lng)
    n = va_arg(*args, unsigned long);
  else if (*shrt)
    n = (unsigned short)va_arg(*args, unsigned int);
  else
    n = va_arg(*args, unsigned int);

  /* unused flags*/
  (void)plus_flag;
  (void)n_flag;

  /* implimentation if no digit is given to zny specifier */
  if (*zero_flag && *got_precision && *precision == 0 && n == 0) {
    while (i < *width) {
      store_buffer('0', buffer, index);
      i++;
    }
  }

  /* zero_flag implimentation if precion and width specified*/
  else if (*zero_flag && *precision > 0 && *width > 0) {
    len = unsigned_int_len(n, 8);

    /* determine the amount of space needed to padd with '0' */
    if (*precision > len)
      zero = *precision - len;
    else
      zero = 0;

    total = zero + len;

    /* padd with empty space for width implimentation*/
    if (*width > total)
      padding = *width - total;

    if (!*n_flag) // padds with space first if there is no negative flag
                  // specifier
    {
      /*padding with width first */
      while (i < padding) {
        store_buffer(' ', buffer, index);
        i++;
      }
    }

    i = 0;
    while (i < zero) {
      store_buffer('0', buffer, index);
      i++;
    }
    print_oct_int(n, buffer, index);
    if (*n_flag) // padds space last if negative flag is specified
    {
      while (padding-- > 0)
        store_buffer(' ', buffer, index);
    }

  }

  /* check if no digit was given to any specifier of type */
  else if (*got_precision && *precision == 0 && n == 0) {
    while (i < *width) {
      store_buffer(' ', buffer, index);
      i++;
    }
  }

  /* precision and width implimentation */
  else if (*precision > 0 && *width > 0) {
    len = unsigned_int_len(n, 8);

    /* determine the amount of space needed to padd with '0' */
    if (*precision > len)
      zero = *precision - len;
    else
      zero = 0;

    total = zero + len;

    /* padd with empty space for width implimentation*/
    if (*width > total)
      padding = *width - total;

    if (!*n_flag) // prints space first if no negative flag is specified
    {
      /*padding with width first */
      while (i < padding) {
        store_buffer(' ', buffer, index);
        i++;
      }
    }

    i = 0;
    while (i < zero) {
      store_buffer('0', buffer, index);
      i++;
    }
    print_oct_int(n, buffer, index);
    if (*n_flag) // prints the space last if negative flag is specified
    {
      while (padding-- > 0)
        store_buffer(' ', buffer, index);
    }
  }

  /* implimentation for zero_flag with width */
  else if (*zero_flag && *width > 0) {
    len = unsigned_int_len(n, 8);
    if (*width > len)
      padding = *width - len;

    else
      padding = 0; // padds with '0' first if there's no negative flag specifier

    if (!*n_flag) {
      while (i < padding) {
        store_buffer('0', buffer, index);
        i++;
      }
    }
    print_oct_int(n, buffer, index);
    if (*n_flag) // padds with empty space last if negative flag was specified
    {
      while (padding-- > 0)
        store_buffer(' ', buffer, index);
    }

  }

  /* width with l implimentation*/
  else if (*width > 0 && *lng) {
    len = unsigned_lng_len(n, 8);
    if (len >= *width)
      *width = len;

    else
      padding = *width - len;
    if (!*n_flag) // padds with space first if no negative flag was specified
    {
      while (i < padding) {
        store_buffer(' ', buffer, index);
        i++;
      }
    }
    print_oct_lng(n, buffer, index);
    if (*n_flag) // padds with empty space last when a negative flag is
                 // specified
    {
      while (padding-- > 0)
        store_buffer(' ', buffer, index);
    }
  }

  /* handles the l length mdifier for octal values*/
  else if (*lng) {
    print_oct_lng(n, buffer, index);
  }

  /* width and h implimentation*/
  else if (*width > 0 && *shrt) {
    len = unsigned_int_len(n, 8);
    if (len >= *width)
      *width = len;

    else
      padding = *width - len;

    if (!*n_flag) // padds with space first if a negative flag isn't specified
    {
      while (i < padding) {
        store_buffer(' ', buffer, index);
        i++;
      }
    }
    print_oct_int(n, buffer, index);

    if (*n_flag) // padds with space last if a negative flag is specified
    {
      while (padding-- > 0)
        store_buffer(' ', buffer, index);
    }
  }

  /* h modifier for octal values*/
  else if (*shrt) {
    print_oct_int(n, buffer, index);
  }

  /* width modification*/
  else if (*width > 0) {
    len = unsigned_int_len(n, 8);
    if (len >= *width)
      *width = len;

    else
      padding = *width - len;

    if (!*n_flag) // padds with space first if no negative flag specified
    {
      while (i < padding) {
        store_buffer(' ', buffer, index);
        i++;
      }
    }
    print_oct_int(n, buffer, index);
    if (*n_flag) // padds with space last for a negative flag
    {
      while (padding-- > 0)
        store_buffer(' ', buffer, index);
    }
  }

  /* precision implimentation only*/
  else if (*precision > 0) {
    len = unsigned_int_len(n, 8);

    /* computes the amount of space needed for precision padding('0')*/
    if (*precision > len)
      zero = *precision - len;
    else
      zero = 0;

    total = zero + len;

    if (!*n_flag) // padds with '0' if no negative flag
    {
      /* padd with precision ('0') */
      while (i < zero) {
        store_buffer('0', buffer, index);
        i++;
      }
    }
    print_oct_int(n, buffer, index);

    if (*n_flag) // padds the '0' last for a negative flag of precision
                 // specifier
    {
      while (zero-- > 0)
        store_buffer('0', buffer, index);
    }
  }

  else {
    if (*harsh_flag && n != 0)
      store_buffer('0', buffer, index);
    print_oct_int(n, buffer, index);
  }
}

/* hex value */
void print_hex(va_list *args, char *buffer, int *index, int *plus_flag,
               int *harsh_flag, int *lng, int *shrt, int *width, int *precision,
               int *got_precision, int *zero_flag, int *n_flag) {

  int padding = 0;
  int len;
  int i = 0;
  int zero = 0;
  int total = 0;

  unsigned long n;

  if (*lng)
    n = va_arg(*args, unsigned long);
  else if (*shrt)
    n = (unsigned short)va_arg(*args, unsigned int);
  else
    n = va_arg(*args, unsigned int);

  /* unusee flags*/
  (void)plus_flag;

  /* zero_flag output if no digits to any specifier is given */
  if (*zero_flag && *got_precision && *precision == 0 && n == 0) {
    while (i < *width) {
      store_buffer('0', buffer, index);
      i++;
    }
  }

  /* zero_flag implimentation with precision and width */
  /* zero_flag with precison ignores a zero_flag whenever a precison is present
   */
  else if (*zero_flag && *precision > 0 && *width > 0) {
    len = unsigned_int_len(n, 16);

    /* determine the amount of space needed to padd with '0' */
    if (*precision > len)
      zero = *precision - len;

    total = zero + len;

    /* padd with empty space for width implimentation*/
    if (*width > total)
      padding = *width - total;

    if (!*n_flag) // prints space first if no negative flag
    {
      /*padding with width first */
      while (i < padding) {
        store_buffer(' ', buffer, index);
        i++;
      }
    }

    i = 0;
    while (i < zero) {
      store_buffer('0', buffer, index);
      i++;
    }
    _print_hex_int(n, buffer, index);

    /*prints space last if a negative flag is specified */
    if (*n_flag) {
      while (padding-- > 0)
        store_buffer(' ', buffer, index);
    }

  }
  /* check if no digit was given to any specifier */
  else if (*got_precision && *precision == 0 && n == 0) {
    while (i < *width) {
      store_buffer(' ', buffer, index);
      i++;
    }
  }

  /* precision with width implimentation*/
  else if (*precision > 0 && *width > 0) {
    len = unsigned_int_len(n, 16);

    /* determine the amount of space needed to padd with '0' */
    if (*precision > len)
      zero = *precision - len;

    total = zero + len;

    /* padd with empty space for width implimentation*/
    if (*width > total)
      padding = *width - total;

    if (!*n_flag) // padds empty space first if no negative flag
    {
      /*padding with width first */
      while (i < padding) {
        store_buffer(' ', buffer, index);
        i++;
      }
    }

    i = 0;
    while (i < zero) {
      store_buffer('0', buffer, index);
      i++;
    }
    _print_hex_int(n, buffer, index);

    /* padds with space last if a negative flag is specified */
    if (*n_flag) {
      while (padding-- > 0)
        store_buffer(' ', buffer, index);
    }
  }

  /* width and 'l' implimentation if specified */
  else if (*width > 0 && *lng) {
    len = unsigned_lng_len(n, 16);
    if (len >= *width)
      *width = len;

    else
      padding = *width - len;

    if (!*n_flag) // prints space first if no negative flag
    {
      while (i < padding) {
        store_buffer(' ', buffer, index);
        i++;
      }
    }

    _print_hex_lng(n, buffer, index);

    /* padds with space last when a negative flag is specified */
    if (*n_flag) {
      while (padding-- > 0)
        store_buffer(' ', buffer, index);
    }
  }
  /* handles the l length modifier for  hex lowercase values*/
  else if (*lng) {
    _print_hex_lng(n, buffer, index);
  }

  /* width and 'h' specifier implimentation */
  else if (*width > 0 && *shrt) {

    len = unsigned_int_len(n, 16);
    if (len >= *width)
      *width = len;

    else
      padding = *width - len;

    if (!*n_flag) // padds with space first if no negagive flag
    {
      while (i < padding) {
        store_buffer(' ', buffer, index);
        i++;
      }
    }

    _print_hex_int(n, buffer, index);

    /* padds with empty spaces for a negative flag */
    if (*n_flag) // prints space last when a negative flag is specified
    {
      while (padding-- > 0)
        store_buffer(' ', buffer, index);
    }
  }

  /* zero_flag with width implimentstion */
  else if (*zero_flag && *width > 0) {
    len = unsigned_int_len(n, 16);
    if (*width > len)
      padding = *width - len;

    else
      padding = 0;

    /* padds zeroz('0') first for zero_flag  when a neagative flag isn't
     * specified for a  zero flag specification*/
    if (!*n_flag) {
      while (i < padding) {
        store_buffer('0', buffer, index);
        i++;
      }
    }

    _print_hex_int(n, buffer, index);

    /* padds with spaces last when a neagtive flag is specified for a zero_flag
     * specificstion */
    if (*n_flag) {
      while (padding-- > 0)
        store_buffer(' ', buffer, index);
    }

  }

  /* h modifier for hex lowercase values*/
  else if (*shrt) {
    _print_hex_int(n, buffer, index);
  }

  /* if width specified only*/
  else if (*width > 0) {
    len = unsigned_int_len(n, 16);
    if (len >= *width)
      *width = len;

    else
      padding = *width - len;

    /* padds space first when no negative flag is specified */
    if (!*n_flag) {
      while (i < padding) {
        store_buffer(' ', buffer, index);
        i++;
      }
    }

    _print_hex_int(n, buffer, index);

    /* padds space last when a negative flag is specified */
    if (*n_flag) {
      while (padding-- > 0)
        store_buffer(' ', buffer, index);
    }
  }

  /* precision implimentation only*/
  else if (*precision > 0) {
    len = unsigned_int_len(n, 16);

    /* computes the amount of space needed for precision padding('0')*/
    if (*precision > len)
      zero = *precision - len;
    else
      zero = 0;

    if (!*n_flag) // padds with '0' first when no negative flag is specified
    {
      /* padd with precision ('0') */
      while (i < zero) {
        store_buffer('0', buffer, index);
        i++;
      }
    }
    _print_hex_int(n, buffer, index);

    /* padds with the '0' last if a negative flag is specified */
    if (*n_flag) {
      while (zero-- > 0)
        store_buffer('0', buffer, index);
    }
  }

  else {
    if (*harsh_flag && n != 0) {
      store_buffer('0', buffer, index);
      store_buffer('x', buffer, index);
    }
    _print_hex_int(n, buffer, index);
  }
}

/* HEX value */
void print_HEX(va_list *args, char *buffer, int *index, int *plus_flag,
               int *harsh_flag, int *lng, int *shrt, int *width, int *precision,
               int *got_precision, int *zero_flag, int *n_flag) {

  int padding = 0;
  int i = 0;
  int len;
  int total = 0;
  int zero = 0;

  unsigned long n;

  if (*lng)
    n = va_arg(*args, unsigned long);

  else if (*shrt)
    n = (unsigned short)va_arg(*args, unsigned int);

  else
    n = va_arg(*args, unsigned int);

  /* unused flags*/
  (void)plus_flag;

  /* implimentstion for zero_flsg if no digits == 0 or none were to be specified
   */
  if (*zero_flag && *got_precision && *precision == 0 && n == 0) {
    while (i < *width) {
      store_buffer('0', buffer, index);
      i++;
    }
  }

  /* zero_flag implimentation with width and precion */
  /*and rules is that when precision is present in zero_flag we ignore the
     zero_flag and use precision with width implimentation */
  else if (*zero_flag && *precision > 0 && *width > 0) {
    len = unsigned_int_len(n, 16);

    /* determine the amount of space needed to padd with '0' */
    if (*precision > len)
      zero = *precision - len;
    else
      zero = 0;

    total = zero + len;

    /* padd with empty space for width implimentation*/
    if (*width > total)
      padding = *width - total;

    if (!*n_flag) // checks and print the space first if no negative flag waa
                  // specified
    {
      /*padding with width first */
      while (i < padding) {
        store_buffer(' ', buffer, index);
        i++;
      }
    }

    i = 0;
    while (i < zero) {
      store_buffer('0', buffer, index);
      i++;
    }
    _print_HEX_INT(n, buffer, index);

    /* prints ths space last if a negative flag is specified */
    if (*n_flag) {
      while (padding-- > 0)
        store_buffer(' ', buffer, index);
    }
  }

  /* check if no digit was given to any specifier of type */
  else if (*got_precision && *precision == 0 && n == 0) {
    while (i < *width) {
      store_buffer(' ', buffer, index);
      i++;
    }
  }

  /* precision with width implimentation */
  else if (*precision > 0 && *width > 0) {
    len = unsigned_int_len(n, 16);

    /* determine the amount of space needed to padd with '0' */
    if (*precision > len)
      zero = *precision - len;
    else
      zero = 0;

    total = zero + len;

    /* padd with empty space for width implimentation*/
    if (*width > total)
      padding = *width - total;

    if (!*n_flag) // padds with space first if no negative flag
    {
      /*padding with width first */
      while (i < padding) {
        store_buffer(' ', buffer, index);
        i++;
      }
    }

    i = 0;
    while (i < zero) {
      store_buffer('0', buffer, index);
      i++;
    }
    _print_HEX_INT(n, buffer, index);

    /* else we padd the space last if a negative flag was specified */
    if (*n_flag) {
      while (padding-- > 0)
        store_buffer(' ', buffer, index);
    }
  }

  /* implementation of width && l if specified*/
  else if (*width > 0 && *lng) {
    len = unsigned_lng_len(n, 16);

    if (len >= *width)
      *width = len;

    else
      padding = *width - len;

    /*padds the space first if no negative flag specified*/
    if (!*n_flag) {
      while (i < padding) {
        store_buffer(' ', buffer, index);
        i++;
      }
    }
    _print_HEX_LNG(n, buffer, index);
    /*padds the space last for a negative flag */
    if (*n_flag) {
      while (padding-- > 0)
        store_buffer(' ', buffer, index);
    }
  }

  /* handles the l length modifier for hex uppercase values*/
  else if (*lng) {
    _print_HEX_LNG(n, buffer, index);
  }

  /* implementation of width && h if specified*/
  else if (*width > 0 && *shrt) {
    len = unsigned_int_len(n, 16);
    if (len >= *width)
      *width = len;

    else
      padding = *width - len;

    /* padds the space first if no negative flag specified*/
    if (!*n_flag) {
      while (i < padding) {
        store_buffer(' ', buffer, index);
        i++;
      }
    }
    _print_HEX_INT(n, buffer, index);

    /*padds the space last for a negative flag */
    if (*n_flag) {
      while (padding-- > 0)
        store_buffer(' ', buffer, index);
    }
  }
  /* h modifier for hex uppercase values*/
  else if (*shrt) {
    _print_HEX_INT(n, buffer, index);
  }

  /* zero_flag with a width */
  else if (*zero_flag && *width > 0) {
    len = unsigned_int_len(n, 16);

    if (*width > len)
      padding = *width - len;

    else
      padding = 0;

    /* padds with zeros first if no neagtive flag specification*/
    if (!*n_flag) {
      while (i < padding) {
        store_buffer('0', buffer, index);
        i++;
      }
    }

    _print_HEX_INT(n, buffer, index);

    /*padds with space last for a negative flag */
    if (*n_flag) {
      while (padding-- > 0)
        store_buffer(' ', buffer, index);
    }
  }

  /* modification for width specifier only if specified*/
  else if (*width > 0) {
    len = unsigned_int_len(n, 16);

    if (len >= *width)
      *width = len;

    else
      padding = *width - len;

    /*  prints space first if no negative flag*/
    if (!*n_flag) {
      while (i < padding) {
        store_buffer(' ', buffer, index);
        i++;
      }
    }
    _print_HEX_INT(n, buffer, index);

    /*padds the space last for a negative flag */
    if (*n_flag) {
      while (padding-- > 0)
        store_buffer(' ', buffer, index);
    }
  }

  /* precision implimentation only*/
  else if (*precision > 0) {
    len = unsigned_int_len(n, 16);

    /* computes the amount of space needed for precision padding('0')*/
    if (*precision > len)
      zero = *precision - len;
    else
      zero = 0;

    /* padds with the zero first if no negative flag specified */
    if (!*n_flag) {
      /* padd with precision ('0') */
      while (i < zero) {
        store_buffer('0', buffer, index);
        i++;
      }
    }

    _print_HEX_INT(n, buffer, index);
    /*padds the zeros last for a negative flag */
    if (*n_flag) {
      while (zero-- > 0)
        store_buffer(' ', buffer, index);
    }
  }

  /* if no specifier was given/specified*/
  else {
    if (*harsh_flag && n != 0) {
      store_buffer('0', buffer, index);
      store_buffer('X', buffer, index);
    }
    _print_HEX_INT(n, buffer, index);
  }
}

/* STR value */
void print_STR(va_list *args, char *buffer, int *index, int *plus_flag,
               int *harsh_flag, int *lng, int *shrt, int *width, int *precision,
               int *got_precision, int *zero_flag, int *n_flag) {
  int i = 0;
  int padding = 0;
  int len;
  char *str = va_arg(*args, char *);

  /* unuser flags*/
  (void)plus_flag;
  (void)harsh_flag;
  (void)lng;
  (void)shrt;
  (void)precision;
  (void)got_precision;
  (void)zero_flag;

  if (str == NULL)
    str = "(null)";
  ;

  len = S_len(str); // get the length of the string

  /* width modification */
  if (*width > 0) {
    if (len >= *width)
      *width = len;
    else
      padding = *width - len;

    if (!*n_flag) // checks and prins the space first if no negative flag
                  // specification
    {
      while (i < padding) {
        store_buffer(' ', buffer, index);
        i++;
      }
    }
    i = 0; // resets the loop index

    while (str && str[i]) // prints the result
    {
      if (str[i] < 32 || str[i] >= 127) {
        /* print "\x" first */
        store_buffer('\\', buffer, index);
        store_buffer('x', buffer, index);
        /* then print the ascii code value in hexadecimal  in uppercase */

        if ((unsigned char)str[i] < 16)
          store_buffer('0', buffer, index); // prints leading 0

        _print_hex_lng((unsigned char)str[i], buffer, index);
      }

      else {

        store_buffer(str[i], buffer, index);
      }
      i++;
    }

    /* paddd result with space last if a negative flag was specified*/
    if (*n_flag) {
      while (padding-- > 0)
        store_buffer(' ', buffer, index);
    }
  }

  else {
    while (str && str[i]) {
      if (str[i] < 32 || str[i] >= 127) {

        /* print "\x" first */
        store_buffer('\\', buffer, index);
        store_buffer('x', buffer, index);

        /* then print the ascii code value in hexadecimal  in uppercase */
        if ((unsigned char)str[i] < 16)
          store_buffer('0', buffer, index); // prints leading 0

        _print_hex_lng((unsigned char)str[i], buffer, index);
      }

      else {

        store_buffer(str[i], buffer, index);
      }

      i++;
    }
  }
}

/* print address identifier*/
void print_address(va_list *args, char *buffer, int *index, int *plus_flag,
                   int *harsh_flag, int *lng, int *shrt, int *width,
                   int *precision, int *got_precision, int *zero_flag,
                   int *n_flag) {
  int padding = 0;
  int len;
  int i = 0;

  /* unused flags*/
  (void)harsh_flag;
  (void)plus_flag;
  (void)lng;
  (void)shrt;
  (void)precision;
  (void)got_precision;
  (void)zero_flag;

  if (*width > 0) {
    unsigned long addr;
    void *ptr = va_arg(*args, void *);

    addr = (unsigned long)ptr;

    len = unsigned_lng_len(addr, 16);

    if (addr == 0)
      return;

    else {
      if (len >= *width)
        *width = len;
      else
        padding = *width - (len + 2 /* for 0x of the address*/);

      /* checks amd ladd with spaces first if no neagtive flag is specified */
      if (!*n_flag) {
        while (i < padding) {
          store_buffer(' ', buffer, index);
          i++;
        }
      }
    }

    store_buffer('0', buffer, index);
    store_buffer('x', buffer, index);
    _print_hex_lng(addr, buffer, index);

    /* prinst the space last if there is a negative specifier */
    if (*n_flag) {
      while (padding-- > 0)
        store_buffer(' ', buffer, index);
    }
  }

  else {
    unsigned long addr;
    void *ptr = va_arg(*args, void *);

    addr = (unsigned long)ptr;
    if (addr == 0)
      return;

    store_buffer('0', buffer, index);
    store_buffer('x', buffer, index);
    _print_hex_lng(addr, buffer, index);
  }
}
