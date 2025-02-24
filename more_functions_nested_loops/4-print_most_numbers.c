#include "main.h"

/**
* print_most_numbers - prints the numbers, from 0 to 9, followed by a new line.
* Do not print 2 and 4.
*
* Return: void.
*/

void print_most_numbers(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
	{
		if (d == '2' || d == '4')
			continue;

		_putchar(d);
	}

	_putchar('\n');
}
