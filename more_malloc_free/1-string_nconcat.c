#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* string_nconcat - Concatenates two strings.
* @s1: First string.
* @s2: Second string.
* @n: Number of bytes to copy from s2.
*
* Return: Pointer to the newly allocated string.
* If malloc fails, returns NULL.
* If n >= length of s2, copies entire s2.
* If s1 or s2 is NULL, treats it as an empty string.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_length = 0;

	unsigned int s2_length = 0;

	unsigned int size;

	unsigned int i;

	unsigned int j;

	char *s;

	if (s1 != NULL)
		while (s1[s1_length] != '\0')
			s1_length++;

	if (s2 != NULL)
		while (s2[s2_length] != '\0')
			s2_length++;

	if (n >= s2_length)
		n = s2_length;

	size = s1_length + n + 1;
	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < s1_length; i++)
		s[i] = s1[i];

	for (j = 0; j < n; j++)
		s[s1_length + j] = s2[j];

	s[s1_length + n] = '\0';

	return (s);
}
