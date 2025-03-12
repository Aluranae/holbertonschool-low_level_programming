#include "dog.h"
#include <stdlib.h>

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
	int namlen, ownlen, i;
	dog_t *doggy;

	/* Check if input strings are NULL */
	if (name == NULL || owner == NULL)
		return (NULL);

	/* Get the length of name and owner */
	namlen = strlen(name) + 1;
	ownlen = strlen(owner) + 1;

	/* Allocate memory for the new dog */
	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);

	/* Allocate memory for name */
	doggy->name = malloc(namlen);
	if (doggy->name == NULL)
	{
	free(doggy);
		return (NULL);
	}

	/* Allocate memory for owner */
	doggy->owner = malloc(ownlen);
	if (doggy->owner == NULL)
	{
	free(doggy->name);
	free(doggy);
		return (NULL);
	}

	/* Copy name */
	for (i = 0; i < namlen; i++)
		doggy->name[i] = name[i];

	/* Copy owner */
	for (i = 0; i < ownlen; i++)
		doggy->owner[i] = owner[i];

	/* Assign age */
	doggy->age = age;

	return (doggy);
}
