#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
* main - Adds positive numbers
*
* This program takes multiple arguments, checks if they
* are valid positive integers, adds them together, and
* prints the result followed by a new line.
* If no arguments are provided, it prints 0.
* If an argument contains a non-digit character,
* it prints "Error" and returns 1.
*
* @argc: Argument count (number of command-line arguments)
* @argv: Argument vector (array of strings containing the arguments)
*
* Return: 0 on success, 1 on error
*/

int main(int argc, char **argv)
{
	int sum = 0;
	int i = 0;
	int j = 0;
	int num;

	if (argc == 1)
	{
		printf("0\n");
		return (0);

	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
			printf("Error\n");
			return (1);
			}

		}
		num = atoi(argv[i]);

		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
