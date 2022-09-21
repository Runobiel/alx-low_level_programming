#include "main.h"

/**
 * _strcpy - entry point
 *
 * Description: copies the string pointed to by src, including (\0)
 *
 * @src: source string
 * @dest: destination string
 *
 * Return: pointer to destination
 */

char *_strcpy(char *dest, char *src)
{
	int i, len;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0; i <= len ; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
