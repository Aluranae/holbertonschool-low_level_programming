#include "main.h"
#include <stdio.h>

/**
 * _strspn - Gets the length of a prefix substring
 * @s: The main string to search in
 * @accept: The set of characters to match
 *
 * Description: This function calculates the number of bytes
 * in the initial segment of s that consist only of bytes from accept.
 *
 * Return: The number of bytes in the initial segment of s
 * that match characters from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			break;
		j++;
		}
		if (accept[j] == '\0')
		return (i);
	i++;
	}
	return (i);
}
