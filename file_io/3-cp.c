#include "main.h"
#include <fcntl.h>      /* for open */
#include <unistd.h>     /* for read, write, close */
#include <stdlib.h>     /* for malloc, free, exit */
#include <stdio.h>      /* for dprintf */

/**
* main - Entry point: copies content from one file to another
* @ac: Argument count
* @av: Argument vector
* Return: 0 on success, exits with codes 97-100 on error
*/

int main(int ac, char **av)
{
	int fd_from, fd_to;
	ssize_t r_bytes, w_bytes;
	char *buffer;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = malloc(1024);
	if (buffer == NULL)
	{
		dprintf(2, "Error: Can't allocate buffer\n");
		exit(99);
	}

	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		free(buffer);
		exit(98);
	}

	fd_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		free(buffer);
		close(fd_from);
		exit(99);
	}

	/* === LOOP TO READ/WRITE CONTENT (à compléter) === */
	/* while ((r_bytes = read(...)) > 0) */
	/*    w_bytes = write(...); */
	/*    if (w_bytes != r_bytes) → exit(99) */
	/* if (r_bytes == -1) → exit(98) */

	free(buffer);

	if (close(fd_from) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

	return (0);
}