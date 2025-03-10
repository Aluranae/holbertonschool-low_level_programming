#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* malloc_checked - Allocates memory using malloc.
* @b: The number of bytes to allocate.
*
* Return: Pointer to allocated memory.
* If malloc fails, the function exits with status 98.
*/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
