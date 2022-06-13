#include "main.h"
/**
*puts_half - prints every character of astring to stdout
*@str: a pointer to an int that will be updated
*Return: void
*/
void puts_half(char *str)
{
int q;
int last;
q = 0;
while (str[q] != '\0')
{
q++;
}
last = (q + 1) / 2;
for (q = last; str[q]; q++)
{
_putchar (str[q]);
}
_putchar('\n');
}
