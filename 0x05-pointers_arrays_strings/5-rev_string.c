#include "main.h"

/**
 * rev_string - entry point
 *
 * Description - reverse a string
 * @s: inputed string to be reversed
 *
 * Return: no return value
 */

void rev_string(char *s)
{
	char temp;
	int i, d1, d2;

	d1 = 0;
	d2 = 0;

	while (s[d1] != '\0')
	{
		d1++;
	}

	d2 = d1 - 1;

	for (i = 0; i < d1 / 2; i++)
	{
		temp = s[i];
		s[i] = s[d2];
		s[d2--] = temp;
	}
}
