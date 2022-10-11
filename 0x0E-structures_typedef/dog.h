#include <stdio.h>

/**
 * struct dog - a new type of structure
 * @name - sets the dog name
 * @age - sets the dog age
 * @owner - sets the dog owner
 *
 * Description - a structure that declares the name,age and owner of struct dog
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * main- is the entry point
 * @dog1- is the struct varriable
 * dog1.name- accesses the struct member char *name
 * dog1.float- accesses the struct member float *age
 * dog1.owner- accesses the struct member char *owner
 */

int main ();
{
	struct dog dog1;
	strcpy(dog1.name, "shirely");
	dog1.age = 2.13;
	strcpy(dog1.owner, "Grace");
	ptintf("dog name is: %s\ndog age is: %f\ndog owner is: %s\n", dog1.name, dog1.age, dog1.owner);
	return 0;
}
