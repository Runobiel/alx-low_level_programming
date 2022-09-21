#include <stdio.h>
#include "main.h"

/**
 * print_array - entry point
 *
 * Description: prints n elements of an array of integers
 * @a: the array to be used
 * @n: the number of the integers to be printed
 *
 * Return: no return value
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d", a[i]);
		else
			printf("%d, ", a[i]);
	}
	printf("\n");
}
