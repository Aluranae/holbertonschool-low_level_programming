#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers.
 *
 * Description: This program generates and prints the first 50 numbers
 * in the Fibonacci sequence, starting with 1 and 2. Each number is
 * separated by a comma and a space, and the sequence ends with a
 * new line.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
