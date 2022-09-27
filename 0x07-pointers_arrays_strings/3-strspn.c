#include "main.h"

/**
* _strspn - Entry point.
*
* Description- A function that gets the length of a prefix substring.
* @s: initial segment
* @accept: bytes to be returned into s.
*
* Return: accepted bytes into s.
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int n;

	while (*s)
	{
		for (n = 0; accept[n]; n++)
		{
			if (*s == accept[n])
			{
				i++;
				break;
			}
			else if (accept[n + 1] == '\0')
				return (i);
		}
		s++;
	}
	return (i);
}
