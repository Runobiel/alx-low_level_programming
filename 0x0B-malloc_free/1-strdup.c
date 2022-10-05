#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Entry point.
 *
 * Description: It returns a pointer to a newly allocated space in memory.
 * @str: duplicate string.
 *
 * Return: pointer to the duplicated string
 * NULL if memory is insufficient.
 */

char *_strdup(char *str)
{
	char *dup;
	unsigned int i, len;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;
	dup = (char *)malloc(sizeof(char) * (i + 1));

	if (dup == NULL)
		return (NULL);

	for (len = 0; len <= i; len++)
		dup[len] = str[len];

	return (dup);
}
