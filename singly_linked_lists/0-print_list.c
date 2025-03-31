#include <stdio.h>
#include "lists.h"

/**
* print_list - Prints all the elements of a linked list
* @h: Pointer to the first node of the list
*
* Return: The number of nodes printed
*/

size_t print_list(const list_t *h)
{
	const list_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{

		if (current->str == NULL)
		{
		printf("[0] (nil)\n");
		}

		else
		printf("[%u] %s\n", current->len, current->str);

		current = current->next;
		count++;
	}
	return (count);
}
