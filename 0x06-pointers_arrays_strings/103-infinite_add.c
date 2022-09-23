#include "main.h"

#include <stdio.h>

/**
 * infinite_add - entry point                                               *
 * Description: adds two numbers
 * @n1: First number.
 * @n2: Second number.
 * @r: buffer that the function will use to store the result
 * @size_r: buffer size:
 *
 * Return: Pointer to dest.
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i1 = 0, i2 = 0, dg1, dg2, op1, op2, sum = 0;

	while (*(n1 + i1) != '\0')
		i1++;
	while (*(n2 + i2) != '\0')
		i2++;
	if (i1 >= i2)
		dg2 = i1;
	else
		dg2 = i2;
	if (size_r <= dg2 + 1)
		return (0);
	r[dg2 + 1] = '\0';
	i1--, i2--, size_r--;
	op1 = *(n1 + i1) - 48, op2 = *(n2 + i2) - 48;
	while (dg2 >= 0)
	{
		dg1 = op1 + op2 + sum;
		if (dg1 >= 10)
			sum = dg1 / 10;
		else
			sum = 0;
		if (dg1 > 0)
			*(r + dg2) = (dg1 % 10) + 48;
		else
			*(r + dg2) = '0';
		if (i1 > 0)
			i1--, op1 = *(n1 + i1) - 48;
		else
			op1 = 0;
		if (i2 > 0)
			i2--, op2 = *(n2 + i2) - 48;
		else
			op2 = 0;
		dg2--, size_r--;
		}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
