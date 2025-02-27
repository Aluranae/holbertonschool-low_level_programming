#include <stddef.h>
#include "main.h"

/**
* *_strcat - concatenates two strings.
*
* @src: copy from
* @dest: copy to
*
*
* Return: dest
*/

char *_strcat(char *dest, char *src)
{
	size_t i = 0, j = 0;

	while (dest[i] != '\0')
		{
		i++;
		}

	while (src[j] != '\0')
		{
		dest[i] = src[j];
		i++;
		j++;
		}

		dest[i] = '\0';

	return (dest);
}
