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

	namlen = ownlen = 0;
	while (name[namlen++])
		;
	while (owner[ownlen++])
		;
	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);

	doggy->name = malloc(namlen * sizeof(doggy->name));
	if (doggy == NULL)
		return (NULL);
	for (i = 0; i < namlen; i++)
		doggy->name[i] = name[i];

	doggy->age = age;

	doggy->owner = malloc(olen * sizeof(doggy->owner));
	if (doggy == NULL)
		return (NULL);
	for (i = 0; i < ownlen; i++)
		doggy->owner[i] = owner[i];
	return (doggy);
}
