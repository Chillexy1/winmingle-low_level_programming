#include "main.h"

/*
*Author: Chillexy Steven 
*Program: WinMingle Community C Training
*Description: FILE I/O: this is a function that creates a file
*
* COMPILATION : gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-create_file.c _strlen.c -o b
*
*/
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename) /* checks if filename is NULL */
		return (-1);

	if (!text_content) /* create an empty file if text_content is NULL */
	{
		fd = open(filename, O_RDWR | O_CREAT | O_TRUNC | 0644/* rw---- permission */);
		if (fd == -1)
			return (-1);
	}


	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC | 0644/* rw---- permission */);
	if (fd == -1) /* return -1 if file failed to open */
		return (-1);

	write(fd, text_content, _strlen(text_content));

	close(fd);

	return (1);
}
