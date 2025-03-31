#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
* add_node - Adds a new node at the beginning of a linked list
* @head: Double pointer to the head of the list
* @str: String to store in the new node (will be duplicated)
*
* Return: Address of the new element, or NULL if it failed
*/

list_t *add_node(list_t **head, const char *str)
{
	unsigned int length = 0;

	list_t *new = malloc(sizeof(list_t));

	if (head == NULL || new == NULL)
	{
		free(new);
		return (NULL);
	}

	while (str[length] != '\0')
	length++;

	new->str = strdup(str);
	new->len = length;
	new->next = *head;

	*head = new;

	return (new);
}
