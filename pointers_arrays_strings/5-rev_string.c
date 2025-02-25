#include "main.h"

/**
* rev_string - function that reverses a string.
*
*
*@s: Pointer to the string to be reverse
*
* Return: (void)
*/

void rev_string(char *s)
{
	int l = 0, r;
	char t;

	while (s[l] != '\0')
		l++;

	r = l - 1;
	l = 0;

	while (l < r)
	{
		t = s[l];
		s[l] = s[r];
		s[r] = t;
		l++;
		r--;
	}
}
