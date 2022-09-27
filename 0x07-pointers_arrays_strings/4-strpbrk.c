#include "main.h"

/**
 * _strpbrk - Entry point.
 * Description- A function that searches a string for any of a set of bytes.
 *@s: string to be searched
 *@accept: bytes to be located.
 *
 * Return: pointer to located bytes of accept in s, otherwise NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}

	return ('\0');
}
