#include "main.h"

/**
 * _strstr -Entry point.
 *
 * Description: A function that locates a substring.
 * @haystack: string to be checked.
 * @needle: substring to be located.
 *
 * Return: pointer to beginning of needle.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	i = 0;
	while (*haystack)
	{
		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
