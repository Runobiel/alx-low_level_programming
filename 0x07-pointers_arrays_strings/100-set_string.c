#include "main.h"

/**
* set_string - Entry point.
*
* Description- A function that sets the value of a pointer to a char.
* @s: pointer to be changed.
* @to: new value of pointer.
*
* Return: no return value.
*/

void set_string(char **s, char *to)
{
	*s = to;
}
