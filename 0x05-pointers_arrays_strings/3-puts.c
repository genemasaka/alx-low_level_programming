#include "main.h"

/**
*_puts - prints a string to stdout
*@str: A pointer to an int thatwill be updated
*/

void _puts(char *str)
{
char *l;
int n;
l = str;
for (n = 0; l[n]; n++)
{
_putchar (l[n]);
}
_putchar('\n');
}
