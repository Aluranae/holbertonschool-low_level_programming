#include <stdio.h>

/**
* main - Prints the program's name
*
* This program displays its own name as executed.
* If the program is renamed, it will print the new name
* without requiring recompilation.
* The full path is displayed if executed with one.
*
* @argc: Argument count (number of command-line arguments)
* @argv: Argument vector (array of strings containing the arguments)
*
* Return: Always 0 (Success)
*/

int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
