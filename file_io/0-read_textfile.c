#include "main.h"
#include <fcntl.h>      /* for open */
#include <unistd.h>     /* for read, write, close */
#include <stdlib.h>

/**
* read_textfile - Reads a text file and prints it
* to the POSIX standard output.
* @filename: Name of the file to read.
* @letters: Number of letters to read and print.
*
* Return: The actual number of letters it could read and print.
*         0 if the file cannot be opened or read,
*         0 if filename is NULL,
*         0 if write fails or does not write the expected amount of bytes.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;                     /* File descriptor */

	char *buffer;               /* Buffer to hold the content */

	ssize_t r_bytes, w_bytes;   /* Read and written byte counters */

	/* Check if filename is NULL */

	/* Open the file in read-only mode */

	/* Allocate memory for the buffer using malloc */

	/* Read from the file */

	/* Write to the standard output using write() and STDOUT_FILENO */

	/* Free the buffer */

	/* Close the file */

	/* Return the number of bytes successfully read and printed */
}
