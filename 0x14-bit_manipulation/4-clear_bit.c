#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0.
 * @n: input.
 * @index: index.
 *
 * Return: 0.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int j;

	if (n == NULL)
		return (-1);

	j = 1 << index;

	if ((j | *n) == *n)
		*n = *n ^ j;

	return (1);
}
