#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>


/* Functions to display */

/**
* print_char - Prints a character.
* @arg: List of arguments.
*/

void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

/**
* print_int - Prints an integer.
* @arg: List of arguments.
*/

void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
* print_float - Prints a float.
* @arg: List of arguments.
*/

void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
* print_string - Prints a string.
* @arg: List of arguments.
*/

void print_string(va_list arg)
{
	char *str = va_arg(arg, char *);

	if (str == NULL)
		str = "(nil)";

	printf("%s", str);
}


/* Structure definition */

/**
* struct cifs - Struct associant les formats à leurs fonctions.
* @specifier: Caractère du format ('c', 'i', 'f', 's').
* @func: Pointeur vers la fonction d'affichage.
*/

typedef struct cifs
{
	char specifier;

	void (*func)(va_list);
} cifs_t;

/* Correspondence table */

cifs_t format_map[] = {
	{'c', print_char},
	{'i', print_int},
	{'f', print_float},
	{'s', print_string}
};

/**
* print_all - Prints various types of arguments based on format.
* @format: A format string specifying argument types.
*/

void print_all(const char * const format, ...)
{
	va_list args;

	int i = 0;

	int j;

	const char *separator = "";

	va_start(args, format);

	while (format && format[i])
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
