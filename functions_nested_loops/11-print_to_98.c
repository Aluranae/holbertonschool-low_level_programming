#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from `n` to 98.
 * @n: The starting number.
 *
 * Description: This function prints all natural numbers from `n` to 98,
 * separated by a comma and a space, and ending with a new line.
 * If `n` is less than 98, the numbers are printed in ascending order.
 * If `n` is greater than 98, the numbers are printed in descending order.
 *
 * Return: Nothing (void function).
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
