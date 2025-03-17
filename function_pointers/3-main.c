#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point of the program
* @argc: Argument count
* @argv: Argument vector
*
* Return: 0 on success, or exits with an error code on failure
*/

int main(int argc, char *argv[])
{
	int (*op_func)(int, int); /* Function pointer to the selected operation */
	int num1, num2;

	/* Check if the user provided exactly 3 arguments */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/* Convert the first and third arguments to integers */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	/* Validate the operator input */
	if (argv[2] == NULL || argv[2][0] == '\0')
	{
		printf("Error\n");
		exit(99);
	}

	/* Retrieve the corresponding function for the operator */
	op_func = get_op_func(argv[2]);
	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	/* Check for division or modulo by zero */
	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	/* Execute the function and print the result */
	printf("%d\n", op_func(num1, num2));

	return (0);
}
