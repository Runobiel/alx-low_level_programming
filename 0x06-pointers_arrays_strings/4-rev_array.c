#include "main.h"

/**
* reverse_array - entry point
*
* Description- reverses the content of an array of integers.
* @a: array.
* @n: number of elements of the array.
*
* Return: no return value.
*/

void reverse_array(int *a, int n)
{
	int i;
	int j;
	int tmp;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j--] = tmp;
	}
}
