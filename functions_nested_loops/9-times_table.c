#include "main.h"

/**
 * times_table - Prints the 9 times table, starting from 0.
 * @void: No parameters.
 *
 * Description: This function prints the multiplication table of 9,
 * starting from 0 × 9 up to 9 × 9. The numbers are separated by a comma
 * and a space, and single-digit numbers are aligned for proper formatting.
 *
 * Return: Nothing (void function).
 */

void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * mult;

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');

			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
