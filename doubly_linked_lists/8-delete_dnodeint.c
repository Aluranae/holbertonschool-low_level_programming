#include "lists.h"
#include <stdlib.h>

/**
* delete_dnodeint_at_index - Deletes the node at a given index
* in a dlistint_t list
* @head: Double pointer to the head of the list
* @index: Index of the node to delete (starting at 0)
*
* Return: 1 if successful, -1 if it failed
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	/* Cas particulier : suppression de la tête */
	if (index == 0)
	{
		*head = current->next;
		if (*head)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	/* Vérifier si index valide (current non NULL) */
	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}

	if (current == NULL)
		return (-1); /* Index hors limites */

	/* Mettre à jour les pointeurs prev/next du voisinage */
	if (current->next)
    {
		current->next->prev = current->prev;
    }
	if (current->prev)
    {
		current->prev->next = current->next;
    }

	free(current);
	return (1);
}
