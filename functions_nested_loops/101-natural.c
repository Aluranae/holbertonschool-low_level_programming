#include <stdio.h>

/**
 * main - Computes and prints the sum of all multiples of 3 or 5 below 1024.
 *
 * Description: This program iterates through all natural numbers below 1024,
 * checking if each number is a multiple of 3 or 5. If it is, the number is
 * added to a cumulative sum. The final sum is printed, followed by a new line.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}

	printf("%d\n", sum);

	return (0);
}
