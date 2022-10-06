#include "main.h"

/**
 * _abs - Entry point
 *
 * @n: Inputed integer.
 *
 * Description: computes the absolute value.
 *
 * Return: absolute value
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
