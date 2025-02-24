#include <stdio.h>
#include <stdlib.h>

/**
 * fizzBuzz - Prints numbers from 1 to n with FizzBuzz logic.
 * @n: The upper limit of the numbers to print.
 *
 * Description: Prints numbers from 1 to n. If a number is a multiple of:
 * - 3, prints "Fizz" instead of the number.
 * - 5, prints "Buzz" instead of the number.
 * - Both 3 and 5, prints "FizzBuzz".
 * Numbers and words are separated by spaces.
 */

void fizzBuzz(int n);

/**
 * main - Entry point of the program.
 *
 * Description: Calls the fizzBuzz function to print numbers from 1 to 100
 * following the FizzBuzz rules.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	fizzBuzz(100);
	return (0);
}

void fizzBuzz(int n)
{
	int i;

	for (i = 1; i <= n; ++i)
	{
	if (i % 3 == 0 && i % 5 == 0)
		printf("FizzBuzz");
	else if (i % 3 == 0)
		printf("Fizz");
	else if (i % 5 == 0)
		printf("Buzz");
	else
		printf("%d ", i);

	if (i < n)
		printf(" ");
	}
	printf("\n");
}
