#include "main.h"

/**
 * _sqrt_help - Finds the natural square root of a number
 * @n: The number to find the square root of
 * @x: The current number being tested as a potential square root
 *
 * Description: This function recursively checks if x * x equals n.
 * If x * x is greater than n, it returns -1,
 * indicating no natural square root.
 * Otherwise, it increments x and continues searching.
 *
 * Return: The natural square root of n, or -1 if none exists.
 */

int _sqrt_help(int n, int x)
{
	if (x * x > n)
		return (-1);

	if (x * x == n)
		return (x);

	return (_sqrt_help(n, x + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to find the square root of
 *
 * Description: This function calculates the natural square root
 * of n using recursion. If n does not have a natural square root,
 * it returns -1.
 *
 * Return: The natural square root of n, or -1 if n has no natural square root.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt_help(n, 0));
}
