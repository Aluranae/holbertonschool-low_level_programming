#include "lists.h"
#include <stdlib.h>

/**
* add_dnodeint - Adds a new node at the beginning of a dlistint_t list
* @head: Double pointer to the head of the list
* @n: Integer value to store in the new node
*
* Return: Address of the new element, or NULL if it failed
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (head == NULL || new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	new->prev = NULL;

	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}
