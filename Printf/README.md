# _printf

## Description

This project is a custom implementation of the C standard library
function `printf()`.

The goal is to understand how formatted output works in C and to
practice variadic functions, pointers, format specifiers, flags,
width, precision, and length modifiers.

## Features

The implementation supports:

- `%c` - character
- `%s` - string
- `%d` - decimal integer
- `%i` - integer
- `%u` - unsigned integer
- `%o` - octal
- `%x` - hexadecimal
- `%X` - uppercase hexadecimal
- `%b` - binary
- %S - Prints a string with non-printable characters represented in hexadecimal
- %r - prints a reverse string
- %R - Prints a ROT13-encoded string
- `%%` - percent sign

It also supports:

- `+`
- ` `
- `#`
- `0`
- `-`
- Field width
- Precision
- `h` and `l` length modifiers

## Project Structure

```text
_printf/
├── _printf.c
├── _main.h
├── print_number.c
├── print_string.c
├── print_char.c
├── print_hex.c
├── print_octal.c
├── ...
└── README.md

Compilation:
	gcc -Wall -Wextra -Werror -pedantic -std=gnu89 *.c

USAGE:
	_printf("Hello %s\n", "World");
	_printf("Number: %d\n", 42);
	_printf("Hex: %x\n", 42);
N.B:	you can edit the usage sample to any specifier of choice.

What I Learned:

	Through this project, I learned how to:

		Work with variadic functions.

		Use va_list, va_start, va_arg, and va_end.

		Parse format strings.

		Work with pointers and function pointers.

		Handle different data types.

		Implement formatting flags and modifiers.

		Organize a larger C project into multiple files.

LIMITATION:
	THIS IMPLIMENTATION DOES NOT NECASSARILY REPRODUCE EVERY OF THE STANDARD C print() FUNCTION.

FUTURE IMPROVEMENT IS GUARANTEED..

Author:
	Chillexy Steven
