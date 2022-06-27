#include "main.h"
void _puts(char *s)
{
char *c;
int i;
c = s;
for (i = 0; c[i]; i++)
{
_putchar(c[i]);
}
_putchar('\n');
}
