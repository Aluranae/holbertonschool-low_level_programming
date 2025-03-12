#include "dog.h"
#include <stdio.h>

/**
* new_dog - Creates a new dog
* @name: Pointer to a string (dog's name)
* @age: Float value (dog's age)
* @owner: Pointer to a string (owner's name)
*
* Return: Pointer to the new dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	/*declare a pointer to a new dog*/
	dog_t *new_dog;

	/*allocate memory for the new dog*/
	new_dog = malloc(sizeof(dog_t));

	/*check if the memory allocation was successful*/
	if (new_dog == NULL)
		return (NULL);

	/*allocate memory for the dog's name*/
	new_dog->name = malloc(strlen(name) + 1);

	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	/*allocate memory for the dog's owner*/
	new_dog->owner = malloc(strlen(owner) + 1);

	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	/*copy the name and owner to the new dog*/
	strcpy(new_dog->name, name);
	new_dog->age = age;



	return (new_dog);

}
