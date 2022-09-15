#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description : prints the alphabet, in lowercase
 *
 * Return 0 (Succes)
 */

void print_alphabet_x10(void)
{
	int i, l;

	for (i = 0; i < 10; i++)

	{
		for (l = 97; l < 123; l++)
		{
			_putchar(l);
		}

	_putchar('\n');

	}
}
