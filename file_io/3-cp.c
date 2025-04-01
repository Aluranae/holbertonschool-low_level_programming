#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * close_checked - Safely closes a file descriptor
 * @fd: File descriptor
 */
void close_checked(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies content from file_from to file_to
 * @ac: Argument count
 * @av: Argument vector
 * Return: 0 on success, exits with codes 97-100 on error
 */
int main(int ac, char **av)
{
	int fd_from, fd_to;
	ssize_t r_bytes, w_bytes;
	char buffer[1024];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);

	fd_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while ((r_bytes = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		w_bytes = write(fd_to, buffer, r_bytes);
		if (fd_to == -1 || w_bytes != r_bytes)
			close_checked(fd_from),
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]),
			exit(99);
	}

	if (r_bytes == -1)
		close_checked(fd_from),
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]),
		exit(98);

	close_checked(fd_from);
	close_checked(fd_to);
	return (0);
}
