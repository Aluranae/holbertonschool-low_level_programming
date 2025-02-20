#include <stdio.h>

/**
 * main - Computes and prints the sum of even Fibonacci terms ≤ 4,000,000.
 *
 * Description: Generates Fibonacci numbers, adds only the even ones,
 * and prints the final sum followed by a new line.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	unsigned long fib1 = 1, fib2 = 2, fibsum, evensum = 0;

	while (fib1 <= 4000000)
	{
		if (fib1 % 2 == 0)
		evensum += fib1;

		fibsum = fib1 + fib2;
		fib1 = fib2;
		fib2 = fibsum;
	}

	printf("%lu\n", evensum);
	return (0);
}
