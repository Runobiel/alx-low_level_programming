#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point.
 * Description: Adds positive numbers.
 * @argc: The number of arguments passed to program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If one of the numbers contains symbols that are no tdigits - 1.
 *         Otherwise - 0.
 */

int main(int argc, char *argv[])
{
	int n, i, sum = 0;

	for (n = 1; n < argc; n++)
	{
		for (i = 0; argv[n][i]; i++)
		{
			if (argv[n][i] < '0' || argv[n][i] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[n]);
	}
	printf("%d\n", sum);

	return (0);
}
