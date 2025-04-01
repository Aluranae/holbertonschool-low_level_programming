#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
* read_textfile - Reads a file and prints it to stdout
* @filename: File name
* @letters: Number of letters to read and print
* Return: Letters printed, or 0 on failure
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t r_bytes, w_bytes;

	if (filename == NULL)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}

	r_bytes = read(fd, buffer, letters);
	if (r_bytes <= 0)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	w_bytes = write(STDOUT_FILENO, buffer, r_bytes);
	if (w_bytes != r_bytes || w_bytes == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);
	return (r_bytes);
}
