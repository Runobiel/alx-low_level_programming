#include "main.h"

/**
 * _memcpy - Entry point.
 *
 * Description: function that copies memory area.
 * @dest: memory area destication.
 * @src: source memory area.
 * @n: bytes to be copied.
 *
 * Return: pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
