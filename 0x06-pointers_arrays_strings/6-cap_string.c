#include "main.h"

/**
* cap_string - entry point
*
* Description- capitalizes all words of a string.
* @s: inputed string.
*
* Return: the pointer to dest.
*/

char *cap_string(char *s)
{
	int i;
	int j = 0;

	int sepWords[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};


	if (*(s + j) >= 97 && *(s + j) <= 122)
		*(s + j) = *(s + j) - 32;
	j++;

	while (*(s + j) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(s + j) == sepWords[i])
			{
				if ((*(s + (j + 1)) >= 97) && (*(s + (j + 1)) <= 122))
					*(s + (j + 1)) = *(s + (j + 1)) - 32;
				break;
			}
		}
		j++;
	}

	return (s);
}
