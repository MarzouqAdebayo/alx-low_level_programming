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
	char *new_name, *new_owner;

	if (!name || !owner)
		return (NULL);

	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new_name = malloc(sizeof(name));
	if (!new_name)
	{
		free(new);
		return (NULL);
	}
	new_name = strcpy(new_name, name);
	new->name = new_name;
	new->age = age;
	new_owner = malloc(sizeof(owner));
	if (!new_owner)
	{
		free(new_name);
		free(new);
		return (NULL);
	}
	new_owner = strcpy(new_owner, owner);
	new->owner = new_owner;

	return (new);
}
