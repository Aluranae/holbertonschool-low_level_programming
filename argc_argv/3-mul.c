#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/**
* main - Multiplies two numbers
*
* This program takes two arguments, converts them to integers,
* multiplies them, and prints the result followed by a new line.
* If the program does not receive exactly two arguments,
* it prints "Error" and returns 1.
*
* @argc: Argument count (number of command-line arguments)
* @argv: Argument vector (array of strings containing the arguments)
*
* Return: 0 on success, 1 on error
*/

int main(int argc, char **argv)
{
	int num1, num2, prod;

	if (argc != 3)
	{
		printf("Error\n");
			return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	prod = num1 * num2;

	printf("%d\n", prod);

return (0);
}
