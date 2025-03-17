#include "function_pointers.h"
#include <stdio.h>

/**
* print_name - This function calls another function to print a name
* @name: The name to print
* @f: Pointer to function that prints a name
*
* Return: Nothing (void)
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}

		f(name);

}
