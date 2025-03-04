#include <stdio.h>

/**
* main - Prints all arguments received
*
* This program displays all arguments passed to it,
* including the program's name. Each argument is
* printed on a new line.
*
* @argc: Argument count (number of command-line arguments)
* @argv: Argument vector (array of strings containing the arguments)
*
* Return: Always 0 (Success)
*/

int main(int argc, char **argv)
{
	int i = 0;

	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);

return (0);
}
