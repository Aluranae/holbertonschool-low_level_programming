#include "lists.h"
#include <stdio.h>

/**
* print_dlistint - Affiche tous les éléments d'une liste doublement chaînée
* @h: Pointeur vers le premier nœud de la liste
*
* Return: Nombre total de nœuds dans la liste
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
	return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
