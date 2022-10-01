#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: Prints all arguments received by program.
 * @argc: The number of arguments supplied to program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}

	return (0);
}
