#include "main.h"

/**
 * print_number - function that prints an integer.
 * @n: The integer to print.
 *
 * Return: void.
 */

void print_number(int n)
{
	unsigned int numb;

	if (n < 0)
	{
		numb = -n;
		_putchar('-');
	}
	else
	{
		numb = n;
	}
	if (numb / 10)
	{
		print_number(numb / 10);
	}
	_putchar('0' + (numb % 10));
}
