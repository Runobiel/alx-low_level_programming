#include "main.h"

/**
 * _isupper - Entry point
 *
 * Description: checks for uppercase character.
 * @c: inputed character.
 *
 * Return: 1 if c is uppercase otherwise, 0.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
