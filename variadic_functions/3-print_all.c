#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/*   Fonctions pour afficher  */

/**
* print_char - Prints a character from a variadic argument list.
* @arg: The variadic argument list containing the character to print.
*/

void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

/**
* print_int - Prints an integer from a variadic argument list.
* @arg: The variadic argument list containing the integer to print.
*/

void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
* print_float - Prints a float from a variadic argument list.
* @arg: The variadic argument list containing the float to print.
*/

void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
* print_string - Prints a string from a variadic argument list.
* @arg: The variadic argument list containing the string to print.
*/

void print_string(va_list arg)
{
	char *str = va_arg(arg, char *);

	if (str == NULL)
		str = "(nil)";

	printf("%s", str);
}

/**
* print_all - Prints various types of arguments based on a format string.
* @format: A string containing format specifiers ('c', 'i', 'f', 's').
*          Each specifier corresponds to a type: char, int, float, string.
*          If format is NULL, the function prints a newline.
*/

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j;

	cifs_t format_map[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string}
	};

	const char *separator = "";

	va_start(args, format);

	while (format[i])
	{
		j = 0;

		while (j < 4)
		{
			if (format[i] == format_map[j].specifier)
			{
				printf("%s", separator);
				format_map[j].func(args);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}

	printf("\n");
	va_end(args);
}
