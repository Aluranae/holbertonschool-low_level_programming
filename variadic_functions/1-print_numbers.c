#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_numbers - Prints numbers followed by a new line.
* @separator: String printed between numbers.
* @n: Number of integers passed.
*
* Description: Uses variadic arguments to print numbers.
* If separator is NULL, it is not printed.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	if (n == 0)
	{
		printf("\n");
		va_end(args);
		return;
	}

	for (i = 0; i < n; i++)
	{
		int num = va_arg(args, int);

		printf("%d", num);

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(args);
}
