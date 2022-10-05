#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Entry point.
 *
 * Description: A function that concatenates two strings.
 * @s1: first string to concatenate.
 * @s2: second string to concatenate.
 *
 * Return: pointer to new array of chars, NULL if failure.
 */

char *str_concat(char *s1, char *s2)
{
	char *concatStr;
	int i, j = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	concatStr = malloc(sizeof(char) * len);

	if (concatStr == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		concatStr[j++] = s1[i];

	for (i = 0; s2[i]; i++)
		concatStr[j++] = s2[i];

	return (concatStr);
}
