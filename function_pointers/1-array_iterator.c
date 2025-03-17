#include "function_pointers.h"
#include <stdio.h>

/**
* array_iterator - Executes a function on each array element
* @array: The array to process
* @size: Number of elements in the array
* @action: Function pointer to apply on each element
*
* Return: Nothing (void)
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	action(array[i]);

}
