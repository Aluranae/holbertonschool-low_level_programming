#include "main.h"
#include <stdio.h>

/**
* _strstr - Locates a substring in a string
* @haystack: The main string to search in
* @needle: The substring to find
*
* Description: This function searches for the first occurrence
* of the substring needle in the string haystack.
*
* Return: A pointer to the beginning of the located substring,
* or NULL if the substring is not found.
*/

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	if (*needle == '\0')
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			break;
		}
		if (needle[j] == '\0')
			return (haystack + i);
	}
	return (NULL);
}
