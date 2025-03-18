#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_strings - Prints strings followed by a new line.
* @separator: String printed between words.
* @n: Number of strings passed.
*
* Description: Uses variadic arguments to print strings.
* If a string is NULL, prints (nil) instead.
* If separator is NULL, it is not printed.
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;

	unsigned int i;

	char *str;

	va_start(args, n);

	if (n == 0)
	{
		printf("\n");
		va_end(args);
		return;
	}

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str == NULL)
			printf("%s", "(nil)");
		else
			printf("%s", str);

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(args);
}
