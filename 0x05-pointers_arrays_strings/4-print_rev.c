#include "main.h"

/**
 * print_rev - entry point
 * @s: inputed string
 *
 * Description: prints a string, in reverse, followed by a new line
 *
 * Returns: no return value
 */
void print_rev(char *s)
{
	int a, b, len;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	
	len = a;

	for (b = len - 1; b >= 0; b--)
	_putchar(s[b]);

	_putchar('\n');
}
