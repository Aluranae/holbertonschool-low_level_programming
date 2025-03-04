#include <stdio.h>

/**
* main - Prints the number of arguments passed
*
* This program displays the number of arguments
* given to it, excluding the program's name.
*
* @argc: Argument count (number of command-line arguments)
* @argv: Argument vector (array of strings containing the arguments)
*
* Return: Always 0 (Success)
*/

int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
