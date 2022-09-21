#include "main.h"

/**
 * puts2 - entry point
 * Description: prints every other char of a str, starting with the first
 * 
 * @str: char will be printed from this.
 *
 * Returns: no return value
 */

void puts2(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
