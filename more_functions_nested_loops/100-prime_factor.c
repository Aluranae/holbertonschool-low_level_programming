#include <stdio.h>
#include <math.h>

/**
 * main - Finds and prints the largest prime factor of 612852475143.
 *
 * Description: This program calculates the prime factors of 612852475143
 * and prints the largest one, followed by a new line.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	long number = 612852475143;
	long factor = 2;
	long largest = 0;

	while (number % factor == 0)
	{
		largest = factor;
		number /= factor;
	}

	for (factor = 3; factor <= sqrt(number); factor += 2)
	{
	while (number % factor == 0)
	{
		largest = factor;
		number /= factor;
	}
	}

	if (number > 1)
		largest = number;

	printf("%ld\n", largest);
	return (0);
}
