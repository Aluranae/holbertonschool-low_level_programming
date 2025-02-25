#include "main.h"

/**
* print_rev - Prints a string in reverse, followed by a new line
*
*
*@s: Pointer to the string to be printed in reverse
*
* Return: The length of the string
*/

void print_rev(char *s)
{
	int end = 0;

	while (s[end] != '\0')
		end++;
	end--;

	while (end >= 0)
	{
		_putchar(s[end]);
		end--;
	}
	_putchar('\n');
}
