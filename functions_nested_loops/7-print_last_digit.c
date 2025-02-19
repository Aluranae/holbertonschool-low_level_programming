#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number from which the last digit will be extracted.
 *
 * Description: This function prints and returns the last digit
 * of a given number `n`.
 *
 * Return: The last digit of `n`.
 */

int print_last_digit(int n)
{
	int d;

	d = n % 10;

	if (d < 0)
	d = -d;

	_putchar(d + '0');

	return (d);
}
