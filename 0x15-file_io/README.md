File I/O in C
Description;
This project introduces File I/O (Input/Output) in the C programming language.
The goal is to understand how programs interact with files using file descriptors and system calls such as open(), close(), read(), and write().
Unlike standard functions such as printf() and fopen(), this project focuses on the lower-level UNIX system calls used to manipulate files.


File Descriptors;
A file descriptor is a number used by the operating system to identify an opened file.
The three standard file descriptors are:

file_descriptor: 0
Name: Standard Input
Purpose: Reads input, usually from the keyboard

file_descriptor: 1
Name: Standard Output
Purpose: Writes normal program output

file_descriptor: 2
Name: Standard Error
Purpose: Writes error messages

COMPILATION:
All your files will be compiled on Ubuntu  using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89

