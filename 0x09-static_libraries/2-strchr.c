#include "main.h"

/**
 * _strchr - Entry point.
 *
 * Description: A function that locates a character in a string.
 * @s: inputed string.
 * @c: character to be located.
 *
 * Return: pointer to c otherwise, NULL if c not found.
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return ('\0');
}
