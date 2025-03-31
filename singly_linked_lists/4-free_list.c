#include "lists.h"
#include <stdlib.h>

/**
* free_list - Frees a linked list
* @head: Pointer to the head of the list
*
* Return: Nothing (void)
*/

void free_list(list_t *head)
{
	list_t *current = head;
	list_t *temp;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp->str);
		free(temp);
	}
}
