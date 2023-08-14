#include "dog.h"
#include <stdio.h>

/**
 * print_dog - a function that prints a struct dog
 * @d: pointer to struct dog
 *
 */

void print_dog(struct dog *d)
{
	if (!d)
		return;
	if (d->name)
		prinf("Name: %s", d->name);
	else
		prinf("Name: (nil)");
	if (d->age)
		prinf("Age: %d", d->age);
	else
		prinf("Age: (nil)");
	if (d->owner)
		prinf("Owner: %s", d->owner);
	else
		prinf("Owner: (nil)");
}
