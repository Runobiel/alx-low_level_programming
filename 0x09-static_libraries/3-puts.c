#include "main.h"

/**
 * _puts - entry point
 * @s: string to be printed
 * Description: prints a string, followed by a new line, to stdout.
 *
 * Returns: no return value.
 */
void _puts(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
