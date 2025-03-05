#include "main.h"

/**
* _prime_help - Helps to check if a number is prime
* @n: The number to check
* @x: The current divisor being tested
*
* Description: This function recursively checks if n is
* divisible by any number x starting from 2.
*
* Return: 1 if n is prime, 0 otherwise.
*/

int _prime_help(int n, int x)
{
	if (x == 1)
		return (1);

	else if (n % x == 0)
		return (0);

	return (_prime_help(n, x - 1));
}

/**
* is_prime_number - Checks if a number is a prime number
* @n: The number to check
*
* Description: This function determines if n is a prime number
* using recursion. It returns 1 if n is prime, otherwise 0.
*
* Return: 1 if n is a prime number, 0 otherwise.
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (_prime_help(n, n / 2));
}
