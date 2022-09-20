#include "main.h"

/**
 * swap_int - this is the entry point
 * @a: inputted intger 1
 * @b:inputed integer 2
 *
 * Description: swaps the values of two inttegers
 *
 * Return: no return value
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
