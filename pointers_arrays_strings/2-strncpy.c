#include "main.h"

/**
* *_strncpy - copy two strings.
*
* @src: copy from
* @dest: copy to
* @n: The maximum number of characters to copy from src.
* If src is shorter than n, dest is padded with '\0' up to n.
*
* Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (src[a] != '\0' && a < n)
		{
		dest[a] = src[a];
		a++;
		}

	while (a < n)
		{
		dest[a] = '\0';
		a++;
		}

return (dest);
}
