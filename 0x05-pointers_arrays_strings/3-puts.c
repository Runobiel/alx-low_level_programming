#include "main.h"

/**
 * _puts - entry point
 * @str: string to be printed
 *
 * Description- prints a string, followed by a new line to stdout
 *
 * Return: no return value
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
