#include "main.h"

/**
* leet - entry point
*
* Description- encodes a string into 1337
* @s: inputed string.
*
* Return: Pointer to dest.
*/

char *leet(char *s)
{
	int i, j;

	char *p1 = "aAeEoOtTlL";
	char *p2 = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == p1[j])
			{
				s[i] = p2[j];
			}
		}
	}

	return (s);
}
