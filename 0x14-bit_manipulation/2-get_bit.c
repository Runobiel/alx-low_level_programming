#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: input
 * @index: index
 *
 * Return: 0
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	i = (n >> index) & 1;

	if ((i == 1) || (i == 0))
		return (i);
	else
		return (-1);
}
