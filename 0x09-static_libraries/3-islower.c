#include "main.h"

/**
 * _islower - Entry point
 *
 * @c: Character printed from ASCII
 *
 * Description: Checks character.
 *
 * Return: 1 if lowercase, and 0 for uppercase.
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
