#include <stdlib.h>
#include "main.h"

/**
 * argstostr - Entry point.
 *
 * Description: A function that concatenates all the arguments.
 * @ac: count of arguments.
 * @av: array of arguments.
 *
 * Return: Pointer to then ew string.
 *	NULL if failure.
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int c, i, j, size;

	if (ac == 0)
		return (NULL);

	for (c = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}

	str = malloc((c + 1) * sizeof(char));

	if (str == NULL)
	{
		free(str);
		return (NULL);
	}

	for (i = j = size = 0; size < c; j++, size++)
	{
		if (av[i][j] == '\0')
		{
			str[size] = '\n';
			i++;
			size++;
			j = 0;
		}
		if (size < c - 1)
			str[size] = av[i][j];
	}
	str[size] = '\0';

	return (str);
}
