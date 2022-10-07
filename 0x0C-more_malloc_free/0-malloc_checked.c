#include "main.h"

/**
 * malloc_checked -Entry point.
 *
 * Description: A function that allocates memory using malloc.
 * @b: memory to be allocated.
 *
 * Return: pointer to allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
