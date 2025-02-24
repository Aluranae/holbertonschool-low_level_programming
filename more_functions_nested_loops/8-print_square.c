#include "main.h"

/**
* print_square - Prints a square, followed by a new line.
*
* @size: the size of the square.
*
* Return: void.
*/

void print_square(int size)
{
	int idx1, idx2;

	if (size <= 0)
	{
	_putchar('\n');
	return;
	}

	for (idx1 = 0; idx1 < size; idx1++)
	{
		for (idx2 = 0; idx2 < size; idx2++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
