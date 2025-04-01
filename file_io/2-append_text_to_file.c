#include "main.h"
#include <fcntl.h>      /* for open */
#include <unistd.h>     /* for write, close */
#include <stdlib.h>     /* for NULL */

/**
* append_text_to_file - Appends text to the end of a file
* @filename: Name of the file
* @text_content: NULL-terminated string to append
* Return: 1 on success, -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	ssize_t w_bytes;
	int length = 0;

	/* Check if filename is NULL */
	if (filename == NULL)
		return (-1);

	/* Open file in write/append mode without creating it */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	/* If text_content is NULL, close and return success */
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	/* Compute length of text_content */
	while (text_content[length] != '\0')
	length++;

	/* Write text_content to file & Check if write failed*/
	w_bytes = write(fd, text_content, length);
	if (w_bytes != length || w_bytes == -1)
	{
		close(fd);
		return (-1);
	}

	/* Close the file */
	close(fd);

	/* Return 1 on success */
	return (1);
}
