#include "main.h"

/**
 * print_sign - Prints the sign of a number.
 * @n: The number whose sign will be checked.
 *
 * Description: This function checks if the given number `n` is positive,
 * negative, or zero, and prints the corresponding sign.
 *
 * Return: 1 if `n` is greater than zero and prints `+`,
 *         0 if `n` is zero and prints `0`,
 *        -1 if `n` is less than zero and prints `-`.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
