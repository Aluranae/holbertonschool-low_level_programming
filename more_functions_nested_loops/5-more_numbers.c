#include "main.h"

/**
* more_numbers - prints 10 times the numbers, from 0 to 14,
* followed by a new line.
*
*
* Return: void.
*/

void more_numbers(void)
{
	int count = 0;

	while (count < 10)
	{
	int d = 0;

		while (d <= 14)
		{
		if (d >= 10)
			_putchar('1');
		_putchar((d % 10) + '0');

		d++;
		}
		_putchar('\n');
		count++;
	}
}
