#include "function_pointers.h"
#include <stdio.h>

/**
* int_index - Searches for an integer in an array
* @array: The array to search
* @size: Number of elements in the array
* @cmp: Function pointer used for comparison
*
* Return: Index of the first matching element, or -1 if not found
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
