#include "main.h"

/*
*Author: Chillexy Steven
*
* *Program: WinMingle Community C Training
*
* *Description: copies the content of a file to another file
*
*/

int main(int argc, char *argv[])
{
	int file_to;
	int file_from;
	char *buffer[1024];
	ssize_t FD_VALUE;
	ssize_t written;
	ssize_t total;

	if (argc != 3)
	{
		dprintf(2, "Usage: %s %s\n", argv[1], argv[2]);
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(2, "Error: can't read from the file %s\n", argv[1]);

		exit(98);
	}

	file_to = open(argv[2], O_WRONLY| O_CREAT | O_TRUNC, 0644);
	if (file_to == 1)
	{
		close(file_from);
		exit(98);
	}

	/* copy content to the newfile */

	while ((FD_VALUE = read(file_from, buffer, 1024)) > 0)
	{
		total = 0;
		while (total < FD_VALUE)
		{
			written = write(file_to, buffer, FD_VALUE);

			/* checks if write failed  */
			if (written == -1)
			{
				dprintf(2, "Erro: can't print to %s\n", argv[2]);
				exit(99);
			}
			total += written;
		}
	}

	
	/* checks if closed files failed also */
	if (close(file_from) == -1)
	{
		dprintf(2, "Error: can't close fd %li\n", FD_VALUE);
		exit(100);
	}	

	if (close(file_to) == -1)
	{
		dprintf(2, "Error: can't close fd %li\n", FD_VALUE);
		exit(100);
	}

	close(file_from);
	close(file_to);

	return (0);
}
