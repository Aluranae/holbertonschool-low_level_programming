#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct cifs - Associates a format character with a function
 * @specifier: The format character (e.g., 'c', 'i', 'f', 's')
 * @func: Pointer to the function that handles the format
 */

typedef struct cifs
{
	char specifier;

	void (*func)(va_list);
} cifs_t;

/* Déclarations des fonctions */

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

#endif /* VARIADIC_FUNCTIONS_H */
