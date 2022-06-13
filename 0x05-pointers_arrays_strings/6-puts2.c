#include "main.h"
/**
*puts2 - prints every character of a string to stdout
*@str: a pointer to an int that will be updated
*/
void puts2(char *str)
{
int k;
for (k = 0; str[k]  != '\0'; k++)
{
if (k % 2 == 0)
{
_putchar(str[k]);
}
}
_putchar ('\n');
}
