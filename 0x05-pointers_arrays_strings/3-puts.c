#include "main.h"

/**
 * _puts: This is the entry point
 * @str: is string to be printed
 *
 * Description: prints a string, followed by a new line to stdout
 * 
 * Returns: void
 */

void _puts(char *str)
{
	int i;

	for(i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
