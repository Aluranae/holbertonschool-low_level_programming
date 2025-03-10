#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings in a new allocated memory.
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: Pointer to the new string, or NULL on failure.
 *         Treat NULL input as an empty string.
 */

char *str_concat(char *s1, char *s2)
{
	int s1_length = 0;
	int s2_length = 0;
	int size;
	int i;
	int j;
	char *s;

	if (s1 != NULL)
	while (s1[s1_length] != '\0')
	s1_length++;

	if (s2 != NULL)
	while (s2[s2_length] != '\0')
	s2_length++;

	size = s1_length + s2_length + 1;
	s = malloc(size * sizeof(char));

	if (s == NULL)
	return (NULL);

	for (i = 0; i < s1_length; i++)
	s[i] = s1[i];

	for (j = 0; j < s2_length; j++)
	s[s1_length + j] = s2[j];

	s[s1_length + s2_length] = '\0';

	return (s);
}
