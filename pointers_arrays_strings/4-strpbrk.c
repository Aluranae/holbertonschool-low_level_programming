#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: The main string to search in
 * @accept: The set of characters to match
 *
 * Description: This function locates the first occurrence
 * in the string s of any character from accept.
 *
 * Return: A pointer to the first matching character in s,
 * or NULL if no match is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			return (s + i);
		j++;
		}
	i++;
	}
	return (NULL);
}
