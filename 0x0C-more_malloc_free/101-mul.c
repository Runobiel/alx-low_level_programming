#include <stdio.h>
#include "main.h"

int is_digit(char *str);
int _strlen(char *str);
void find_error(void);

/**
 * is_digit - checks if a string contains a non-digit char
 * @str: string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_digit(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @str: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * find_error - handles errors for main
 */
void find_error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int size1, size2, size3, i, prod, n1, n2, *final_result, c = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		find_error();
	size1 = _strlen(s1);
	size2 = _strlen(s2);
	size3 = size1 + size2 + 1;
	final_result = malloc(sizeof(int) * size3);
	if (!final_result)
		return (1);
	for (i = 0; i <= size1 + size2; i++)
		final_result[i] = 0;
	for (size1 = size1 - 1; size1 >= 0; size1--)
	{
		n1 = s1[size1] - '0';
		prod = 0;
		for (size2 = _strlen(s2) - 1; size2 >= 0; size2--)
		{
			n2 = s2[size2] - '0';
			prod += final_result[size1 + size2 + 1] + (n1 * n2);
			final_result[size1 + size2 + 1] = prod % 10;
			prod /= 10;
		}
		if (prod > 0)
			final_result[size1 + size2 + 1] += prod;
	}
	for (i = 0; i < size3 - 1; i++)
	{
		if (final_result[i])
			c = 1;
		if (c)
			_putchar(final_result[i] + '0');
	}
	if (!c)
		_putchar('0');
	_putchar('\n');
	free(final_result);
	return (0);
}
