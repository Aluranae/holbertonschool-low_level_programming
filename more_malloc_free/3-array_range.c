#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* array_range - Creates an array of integers from min to max.
* @min: Minimum value (included).
* @max: Maximum value (included).
*
* Return: Pointer to the new array, or NULL if min > max
* or if malloc fails.
*/

int *array_range(int min, int max)
{
	int *arr;

	int i;

	if (min > max)
		return (NULL);
}
