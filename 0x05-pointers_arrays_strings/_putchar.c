#include <unistd.h>
#include "main.h"

/**
 * Main: this is the enrty point
 *
 * Description: _putchar writes c to standard output
 * @c: is the character to print
 *
 * Return: 1 on success
 * On error - returns -1 and error
 */

int _putchar(char c)
{
return (write(1,&c,1));
}
