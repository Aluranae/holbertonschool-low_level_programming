#include "main.h"

/**
* print_diagonal - draws a straight line in the terminal.
* @n: The number of times '\' should be printed.
*
*
* Return: void.
*/

void print_diagonal(int n)
{
	int idx1, idx2;

	if (n > 0)
	{
		for (idx1 = 0; idx1 < n; idx1++)
		{
			for (idx2 = 0; idx2 < idx1; idx2++)
			{
			_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
	_putchar('\n');
	}
}
