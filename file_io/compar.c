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

	/* Check argument count */
    if (ac != 3)
    {
    dprintf(2, "Usage: cp file_from file_to\n", ac);
        exit(97);
    }

	/* Allocate 1024-byte buffer and check for malloc failure & If it fails, print error and exit with code 98 */
	buffer = malloc(1024);
	if (buffer == NULL)
		return (0);

	/* Open source file (file_from) in read-only mode */
    fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
        free(buffer);
        close(fd_from);
        dprintf(2, "Error: Can't read from file av[1]\n", fd_from);
		exit(98);

	/* Open destination file (file_to) with flags O_CREAT | O_WRONLY | O_TRUNC and 0664 permissions & If it fails, free buffer, close fd_from, print error and exit with code 99*/
    fd_to = open(fd_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
        free(buffer);
        close(fd_to);
        dprintf(2, "Error: Can't write to av[1]\n", fd_to);
		exit(99);

	/* Loop to read and write content */

	/* - read up to 1024 bytes from fd_from into buffer */
	r_bytes = read(fd_from, buffer, 1024);
	if (r_bytes <= 0)
	{
		free(buffer);
		close(fd);
		exit(98);
	}

	/* - write the read bytes to fd_to  - check for errors at each step */
    w_bytes = write(fd_to, buffer, r_bytes);
    if (r_bytes == -1 || w_bytes == -1)
	{
		close(fd);
		exit(99);
	}

	/* Free buffer */
	free(buffer);

	/* Close both file descriptors */
	/* If any close fails, print error and exit with code 100 */
    if (close(fd_from) == -1)
    {
    dprintf(2, "Error: Can't close fd FD_VALUE\n", fd_from);
        exit(100);
    }
    
        if (close(fd_to) == -1)
        {
        dprintf(2, "Error: Can't close fd FD_VALUE\n", fd_to);
            exit(100);
        }

	/* Return 0 on success */
	return (0);
}
