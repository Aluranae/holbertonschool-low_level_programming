#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - Frees memory allocated for a dog structure
 * @d: Pointer to the dog structure to free
 *
 * Description: Releases memory allocated for the dog's name,
 * owner, and the structure itself. Does nothing if d is NULL.
 */

void free_dog(dog_t *d)
{
	/* Check if d is NULL */
	if (d == NULL)
	return;

	 /* Free the dog's name if allocated */
	if (d->name)
		free(d->name);

	/* Free the dog's owner if allocated */
	if (d->owner)
		free(d->owner);

	/* Free the structure itself */
	free(d);
}
