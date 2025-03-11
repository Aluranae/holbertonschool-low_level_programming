#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* _calloc - Allocates memory for an array and initializes it to zero.
* @nmemb: Number of elements.
* @size: Size of each element in bytes.
*
* Return: Pointer to allocated memory, or NULL if malloc fails
* or if nmemb or size is 0.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	unsigned int i;

	char *filler;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	filler = ptr;

	for (i = 0; i < (nmemb * size); i++)
		filler[i] = '\0';

	return (ptr);
}
