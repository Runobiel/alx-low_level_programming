#include "main.h"

/**
 * _strlen - entry point
 * @s: character for a string
 *
 * Description: returns the length of a string.
 *
 * Return: 0 (Success).
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
