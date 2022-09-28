#include "main.h"

/**
* print_chessboard - Entry point.
*
* Description: A function that prints the chessboard.
* @a: chessboard characters to be printed.
*
* Return: no return value.
*/

void print_chessboard(char (*a)[8])
{
	int n1, n2;

	for (n1 = 0; n1 <= 7; n1++)
	{
		for (n2 = 0; n2 <= 7; n2++)
		{
			if (n2 == 7)
			{
				_putchar(a[n1][n2]);
				_putchar('\n');
			}
			else
				_putchar(a[n1][n2]);
		}
	}
}
