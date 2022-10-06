#include "main.h"

/**
 * _atoi - entry point
 *
 * Description: convert a string into an integer.
 *
 * @s: inputed string
 *
 * Return: integer.
 */
int _atoi(char *s)
{
	int i = 0, sign = 1;
	unsigned int res = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		res = (res * 10) + (s[i] - '0');
		i++;
	}
	res *= sign;
	return (res);
}
