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
	strcpy(d.name, "Poppy");
	d.age = 3.5;
	strcpy(d.owner, "Bob");
	printf("dog name is: %s\ndog age is: %f\ndog owner is: %s\n", d.name, d.age, d.owner);
	return 0;
}
