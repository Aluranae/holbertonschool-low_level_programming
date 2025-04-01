#include "lists.h"
#include <stdlib.h>

/**
* insert_dnodeint_at_index - Inserts a new node at a given position
* @h: Double pointer to the head of the list
* @idx: Index where the new node should be added (starting at 0)
* @n: Integer value to store in the new node
*
* Return: Address of the new node, or NULL if it failed
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current = *h;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);

	/* Cas spécial : insertion en tête */
	if (idx == 0)
		return (add_dnodeint(h, n));

	/* Parcours jusqu'à l'index souhaité */
	while (current && i < idx - 1)
	{
		current = current->next;
		i++;
	}

	if (current == NULL || (current->next == NULL && i < idx - 1))
		return (NULL); /* Index hors limites */

	/* Cas spécial : insertion à la fin */
	if (i + 1 == idx && current->next == NULL)
		return (add_dnodeint_end(h, n));

	/* Allocation du nouveau nœud */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	/* Connexions du nouveau nœud */
	new->next = current->next;
	new->prev = current;

	/* Réajustement des liens des voisins */
	current->next->prev = new;
	current->next = new;

	return (new);
}
