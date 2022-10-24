#include "main.h"

/**
 * _isalpha - Entry point
 * @c: Character printed from ASCII
 * Description: Checks character.
 * Return: 1 if it is a letter, otherwise, 0.
 */

int _isalpha(int c)
{
if ((c > 96 && c < 123) || (c > 64 && c < 91))
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
