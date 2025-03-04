#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: The string to measure
 *
 * Description: This function calculates the length of a string
 * using recursion instead of loops.
 * It stops counting when it reaches the null terminator.
 *
 * Return: The length of the string as an integer.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	else
		return (1 + _strlen_recursion(s + 1));
}
