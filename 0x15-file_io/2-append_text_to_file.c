#include "main.h"

/*
*Author: Chillexy Steven        
*
* Program: WinMingle Community C Training
*
* Description: this functiin appends text at the end of a file
*
* COMPILATION: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-append_text_to_file.c _strlen.c -o c
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd; 


	if (!filename) /* checks if filename is NULL */
		return (-1);
	
	/* creates file if it exist */
	fd = open(filename, O_APPEND | 0644);
	if (fd == -1) /* checks if file doesn't exist */
		return (-1);

	if (text_content) /* writes to file if text_content isn't NULL */
		write(fd, text_content, _strlen(text_content));

	close(fd); /* closes file after use */

	return (1);/* success */
}
