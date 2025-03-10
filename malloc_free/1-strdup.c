#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Creates a duplicate of a string in a new memory space.
 * @str: The input string to duplicate.
 *
 * Return: Pointer to the duplicated string, or NULL if str is NULL
 *         or if memory allocation fails.
 */

char *_strdup(char *str)
{

	unsigned int i, size;
	char *ptr;

	if (str == NULL)
	return (NULL);

	size = 0;
	while (str[size] != '\0')
	size++;

	ptr = malloc((size + 1) * sizeof(char));

	if (ptr == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	ptr[i] = str[i];

	ptr[size] = '\0';

	return (ptr);
}
