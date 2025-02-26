#include "main.h"

/**
* _atoi - Converts a string to an integer.
*
* @s: The input string to convert
*
*
*
* Return: The converted integer, or 0 if no number is found.
*/

int _atoi(char *s)
{
	int sign = 1;
	int res = 0;
	int idx = 0;
	int max_int = 2147483647;

	while (s[idx] == ' ')
	{
		idx++;
	}

	while (s[idx] == '-' || s[idx] == '+')
	{
		if (s[idx] == '-')
		{
			sign *= -1;
		}
		idx++;
	}

	while (s[idx] >= '0' && s[idx] <= '9')
	{
		if (res > max_int / 10 || (res == max_int / 10 && s[idx] - '0' > 7))
		{
		return (sign == 1 ? max_int : -max_int - 1);
		}

		res = 10 * res + (s[idx++] - '0');
	}
	return (res * sign);
}
