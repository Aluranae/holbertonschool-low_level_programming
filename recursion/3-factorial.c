#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 * @n: The number to compute the factorial of
 *
 * Description: This function calculates the factorial of n
 * using recursion instead of loops.
 * If n is lower than 0, it returns -1 to indicate an error.
 *
 * Return: The factorial of n, or -1 if n is negative.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (1);

	else
		return (n * factorial(n - 1));
}
