#include "main.h"

/**
* swap_int - swaps the values of two integers.
*
* @a: Pointer to the first integer
* @b: Pointer to the second integer
*
* Return: void
*/

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
