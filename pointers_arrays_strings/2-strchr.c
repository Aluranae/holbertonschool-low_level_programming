#include "main.h"
#include <stdio.h>

/**
 * _strchr - Locates a character in a string
 * @s: Pointer to the string to search in
 * @c: Character to find
 *
 * Description: This function searches for the first occurrence
 * of the character c in the string s.
 *
 * Return: A pointer to the first occurrence of c,
 * or NULL if the character is not found.
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
	s++;
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
