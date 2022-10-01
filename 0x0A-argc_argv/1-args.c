#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: prints the number of arguments passed into program.
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
