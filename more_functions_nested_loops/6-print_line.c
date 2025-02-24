#include "main.h"

/**
* print_line - draws a straight line in the terminal.
* @n: The number of times '_' should be printed.
*
*
* Return: void.
*/

void print_line(int n)
{
	int idx1;

	if (n > 0)
	{
		for (idx1 = 0; idx1 < n; idx1++)
		{
		_putchar('_');
		}
	}
	_putchar('\n');
}
