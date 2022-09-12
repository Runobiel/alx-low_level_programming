#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
int p;
char low;

for (p = '0'; p <= '9'; p++)
putchar(p);
for (low = 'a'; low <= 'f'; low++)
putchar(low);
putchar('\n');
return (0);
}
