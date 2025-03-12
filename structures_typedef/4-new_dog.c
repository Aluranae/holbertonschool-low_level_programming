#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	/* Declare a pointer to a new dog */
	dog_t *new_dog;

	/* Check if input strings are NULL */
	if (name == NULL || owner == NULL)
		return (NULL);

	/* Allocate memory for the new dog */
	new_dog = malloc(sizeof(dog_t));

	/* Check if the memory allocation was successful */
	if (new_dog == NULL)
		return (NULL);

    	/* Allocate and copy the dog's name */
	new_dog->name = malloc(strlen(name) + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	strcpy(new_dog->name, name);

	/* Allocate and copy the dog's owner */
	new_dog->owner = malloc(strlen(owner) + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	strcpy(new_dog->owner, owner);

	/* Assign the dog's age */
	new_dog->age = age;

	/* Return the pointer to the new dog */
	return (new_dog);
}
