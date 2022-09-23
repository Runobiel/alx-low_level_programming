#include "main.h"

/**
* _strcat - entry point
*
* Description - appends to a string and overwrites teminal null byte
* @dest: destination string.
* @src: source string.
*
* Return: Pointer to dest.
*/

char *_strcat(char *dest, char *src)
{
int n1 = 0, n2 = 0;

	while (*(dest + n1) != '\0')
	{
		n1++;
	}

	while (n2 >= 0)
	{
		*(dest + n1) = *(src + n2);
		if (*(src + n2) == '\0')
		break;
		n1++;
		n2++;
	}

	return (dest);
}
