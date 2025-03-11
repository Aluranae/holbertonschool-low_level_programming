#include "dog.h"
#include <stdio.h>

/**
* print_dog - Prints a struct dog
* @d: Pointer to the struct dog to print
*
* Description: Prints the dog's name, age, and owner.
* If an element is NULL, prints (nil) instead.
* If d is NULL, prints nothing.
*/

void print_dog(struct dog *d)
{
	/* Check if the pointer is valid */
	if (d != NULL)
	{
		/* Print the dog's name */
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

		/* Print the dog's age with 1 decimal */
		printf("Age: %.1f\n", d->age);

		/* Print the dog's owner */
		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
