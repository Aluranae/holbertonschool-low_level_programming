#include "dog.h"
#include <stdlib.h>

/**
 * _strdup_custom - Custom function to duplicate a string
 * @str: The string to duplicate
 *
 * Return: Pointer to the newly allocated string, or NULL on failure
 */
char *_strdup_custom(char *str)
{
	char *dup;
	int i, len = 0;

	if (str == NULL)
	return (NULL);

	while (str[len])
		len++;
	len++; /* Include null terminator */

	dup = malloc(len);
	if (dup == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		dup[i] = str[i];

	return (dup);
}

/**
 * free_dog_memory - Frees allocated memory in case of failure
 * @dogg: Pointer to the dog struct
 */

void free_dog_memory(dog_t *dogg)
{
	if (dogg)
	{
		if (dogg->name)
			free(dogg->name);
		if (dogg->owner)
			free(dogg->owner);
		free(dogg);
	}
}

/**
 * new_dog - Creates a new dog
 * @name: Pointer to a string (dog's name)
 * @age: Float value (dog's age)
 * @owner: Pointer to a string (owner's name)
 *
 * Return: Pointer to the new dog, or NULL if allocation fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogg;

	/* Check if input strings are NULL */
	if (name == NULL || owner == NULL)
		return (NULL);

	/* Allocate memory for the new dog */
	dogg = malloc(sizeof(dog_t));
	if (dogg == NULL)
		return (NULL);

	/* Duplicate name */
	dogg->name = _strdup_custom(name);
	if (dogg->name == NULL)
	{
		free_dog_memory(dogg);
		return (NULL);
	}

	/* Duplicate owner */
	dogg->owner = _strdup_custom(owner);
	if (dogg->owner == NULL)
	{
		free_dog_memory(dogg);
		return (NULL);
	}

	/* Assign age */
	dogg->age = age;

	return (dogg);
}

