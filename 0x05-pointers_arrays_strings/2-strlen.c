#include "main.h"

/**
 * _strlen- the entry point
 * @s: character for string
 *
 * Description- returns the length of a string
 * Return: 0 on success
 */

int _strlen(char *s)
{

	int i, len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}
