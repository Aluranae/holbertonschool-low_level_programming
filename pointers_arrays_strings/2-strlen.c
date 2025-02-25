#include "main.h"

/**
* _strlen - returns the length of a string.
*
*
*@s: Pointer to the string to be measured
*
* Return: The length of the string
*/

int _strlen(char *s)
{
	int c = 0;

	while (*s++)
		c++;

	return (c);
}
