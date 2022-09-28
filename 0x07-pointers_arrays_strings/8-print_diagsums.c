#include "main.h"

/**
* print_diagsums - Entry point.
*
* Description- Prints the sum of 2 diagonals of a square matrix of integers.
* @a: matrix name.
* @size: matrix size.
*
* Return: no return value.
*/

void print_diagsums(int *a, int size)
{
	int i;
	int n1 = 0;
	int n2 = 0;

	for (i = 0; i < size; i++)
	{
		n1 += a[i];
		a += size;
	}

	a -= size;
	for (i = 0; i < size; i++)
	{
		n2 += a[i];
		a -= size;
	}

	printf("%d, %d\n", n1, n2);
}
