#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
* print_char - Prints a character from a variadic argument list.
* @arg: The variadic argument list containing the character to print.
*
* Description: Extracts a character from the argument list and prints it.
*/

void print_char(va_list arg)
{

	char letter;

	letter = va_arg(arg, int);
	printf("%c", letter);
}


/**
* print_int - Prints an integer from a variadic argument list.
* @arg: The variadic argument list containing the integer to print.
*
* Description: Extracts an integer from the argument list and prints it.
*/

void print_int(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	printf("%d", num);
}

/**
* print_float - Prints a float from a variadic argument list.
* @arg: The variadic argument list containing the float to print.
*
* Description: Extracts a float from the argument list and prints it.
*/

void print_float(va_list arg)
{
	float fnum;

	fnum = va_arg(arg, double);
	printf("%f", fnum);
}


/**
* print_string - Prints a string from a variadic argument list.
* @arg: The variadic argument list containing the string to print.
*
* Description: If the string is NULL, it prints "(nil)".
*/

void print_string(va_list arg)
{

	char *str;

	str = va_arg(arg, char *);

		if (str == NULL)
		{
			printf("%s", "(nil)");
			return;
		}
		printf("%s", str);
}

/**
* struct cifs - Struct to map format specifiers,
* to their corresponding functions.
* @specifier: The format specifier (e.g., 'c', 'i', 'f', 's').
* @func: Pointer to the function that handles the specifier.
*/

typedef struct cifs
{
	char specifier;

	void (*func)(va_list);
} cifs_t;

/* format_map - Array of cifs structs mapping specifiers to functions */

struct cifs format_map[] = {
	{'c', print_char},
	{'i', print_int},
	{'f', print_float},
	{'s', print_string}
};

/**
* print_all - Prints various types of arguments based on format.
* @format: A format string specifying argument types.
*
* Description: Uses variadic arguments to print values.
* Format specifiers:
* 'c' - char, 'i' - int, 'f' - float, 's' - string (prints "(nil)" if NULL).
* Ignores unrecognized specifiers.
* Prints a new line at the end.
*/

void print_all(const char * const format, ...)
{
	va_list args;

	int i = 0;

	int j = 0;

	const char *separator = "";

	va_start(args, format);

	if (format == NULL)
	{
		printf("\n");
		va_end(args);
		return;
	}

	while (format && (*(format + i)))
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
