#include "dog.h"
#include <stdio.h>

/**
* init_dog - Initialize a dog structure
* @d: Pointer to the struct dog to initialize
* @name: Pointer to a string (dog's name)
* @age: Float value (dog's age)
* @owner: Pointer to a string (owner's name)
*
* Description: Assigns values to a struct dog if the pointer is valid.
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* Check if the pointer is valid */
	if (d != NULL)
	{
		/* Assign values to the struct */
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
