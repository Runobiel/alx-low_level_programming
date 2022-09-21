#include "main.h"

/**
 * _puts- is entry point
 * @str: string to be printed
 *
 * Description- prints a string, followed by a new line to stdout
 *
 * Returns:string
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
