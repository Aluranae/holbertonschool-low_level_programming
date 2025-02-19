#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 * @void: No parameters.
 *
 * Description: This function prints every minute of the day
 * from 00:00 to 23:59, with each time displayed in the format `HH:MM`.
 *
 * Return: Nothing (void function).
 */

void jack_bauer(void)
{
	int h, m;

	for (h = 0;  h <= 23; h++)
	{
		for (m = 0; m <= 59; m++)
		{
		_putchar((h / 10) + '0');
		_putchar((h % 10) + '0');
		_putchar(':');
		_putchar((m / 10) + '0');
		_putchar((m % 10) + '0');
		_putchar('\n');
		}
	}
}
