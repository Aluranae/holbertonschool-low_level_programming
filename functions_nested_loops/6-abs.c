#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @n: The integer whose absolute value is to be computed.
 *
 * Description: This function returns the absolute value of a given
 * integer `n`.
 *
 * Return: The absolute value of `n`.
 */

int _abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}
