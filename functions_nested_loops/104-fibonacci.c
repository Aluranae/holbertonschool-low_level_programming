#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: program that finds and prints the first 98 Fibonacci
 *              numbers, starting with 1 and 2
 *
 * Return: Always 0 successful
 */

int main(void)
{
	int count;
	unsigned long fib1_low = 1, fib2_low = 2, fibsum_low;
	unsigned long fib1_high = 0, fib2_high = 0, fibsum_high;
	unsigned long overflow = 10000000000;

	for (count = 0; count < 98; count++)
	{
		if (fib1_high > 0)
			printf("%lu%010lu", fib1_high, fib1_low);
		else
			printf("%lu", fib1_low);

		if (count != 97)
			printf(", ");

		fibsum_low = fib1_low + fib2_low;
		fibsum_high = fib1_high + fib2_high;

		if (fibsum_low >= overflow)
		{
			fibsum_high += 1;
			fibsum_low -= overflow;
		}

		fib1_high = fib2_high;
		fib1_low = fib2_low;
		fib2_high = fibsum_high;
		fib2_low = fibsum_low;
	}
	printf("\n");
	return (0);
}
