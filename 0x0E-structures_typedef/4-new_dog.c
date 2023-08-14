#include <string.h>
#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - a function that creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: new dog struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	if (!name || !owner)
		return (NULL);

	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->name = malloc(sizeof(name));
	if (!new->name)
	{
		free(new);
		return (NULL);
	}
	strcpy(new->name, name);
	new->age = age;
	new->owner = malloc(sizeof(owner));
	if (!new->owner)
	{
		free(new->name);
		free(new);
		return (NULL);
	}
	strcpy(new_owner, owner);

	return (new);
}
