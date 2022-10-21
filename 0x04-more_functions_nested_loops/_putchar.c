#include <unistd.h>
#include "main.h"

/**
 * Main - Entry point
 * Description:_putchar writes c to standard output
 * @c: The character to print
 *
 * Return: On success 1.
 * On erro, -1 is returned, and eeror is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
