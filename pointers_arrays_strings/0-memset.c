#include "main.h"

/**
 * _memset - Fills a memory area with a constant byte
 * @s: Pointer to the memory area to fill
 * @b: Constant byte to copy
 * @n: Number of bytes to fill
 *
 * Description: This function replaces the first n bytes
 * of the memory area pointed to by s with the value b.
 *
 * Return: Returns a pointer to the modified memory area (s).
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
	s[i] = b;
	i++;
	}
	return (s);
}
