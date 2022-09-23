#include "main.h"

/**
* rot13 - entry point
*
* Description- encodes a string in rot13
* @s: string to be encoded
*
* Return: String
*/

char *rot13(char *s)
{
	int i, j;

	char alph1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char alph2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; alph1[j] != '\0'; j++)
		{
			if (s[i] == alph1[j])
			{
				s[i] = alph2[j];
				break;
			}
		}
	}

	return (s);
}
