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

	unsigned int i;

	unsigned int size;

	if (min > max)
		return (NULL);

	size = (max - min + 1);

	arr = malloc(size * sizeof(int));
	if (arr == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	arr[i] = min + i;

	return (arr);
}
