#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Description - generates random valid passwords for the program 101-crackme
 *
 * Return: Always 0 (Succcess)
 */

int main(void)
{
	int b = 0, c = 0;

	time_t t;

	srand((unsigned int) time(&t));

	while (c < 2772)
	{
		b = rand() % 128;

		if ((c + b) > 2772)

		break;

		c = c + b;

		printf("%c", b);
	}

	printf("%c\n", (2772 - c));
	return (0);
}
