#include "dog.h"

/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: pointer to the struct type
 * @name: name
 * @age: age
 * @owner: owner
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
