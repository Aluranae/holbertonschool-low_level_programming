#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - Crée un tableau de taille donnée et l'initialise avec c
 * @size: taille du tableau
 * @c: Charactére a ajouter
 * Return: (array)
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	return (NULL);

	array = malloc(size * sizeof(char));
	if (array == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	array[i] = c;
	return (array);
}
