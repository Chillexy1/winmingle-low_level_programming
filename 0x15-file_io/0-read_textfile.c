#include "main.h"

/*
*Author: Chillexy Steven          
*Program: WinMingle Community C Training

*Description: FILE I/O : thid function reads a text_file and prints it to the POSIX standard output.
*@ count : returns the actual number of letters it could read 
*@ fd: file descriptor.
*@ buffer: stores character to be printed 
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int count, fd;

	char *buffer;

	/* allocates space for character to be stored in buffer */
	buffer = malloc(sizeof(*buffer) * letters);
	if (!buffer) /* checks if buffer failed */
		return (0);

	if (!filename) /* checks if filename is NULL */
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)/* checks if file opening succeeded or not */
		return (0);

	count = read(fd, buffer, letters);

	write(1, buffer, count); /* write to the STANDARD OUTPUT(1) */

	free(buffer);
	close(fd); /* close file */

	return (count);
}
