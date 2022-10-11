#include <stdio.h>
#include "dog.h"

/**
 * init_dog- entry point
 * @d: a new type of structure
 * @name: sets the dog name
 * @age: sets the dog age
 * @owner: sets the dog owner
 *
 * Description -  a function that initialize a variable of type struct dog
 *
 * return 0 always.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
