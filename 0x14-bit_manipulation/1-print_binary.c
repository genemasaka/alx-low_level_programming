#include "main.h"
/**
 * print_binary - writes binary of a decimal num
 * @n: num to write binary representation of
 */
void print_binary(unsigned long int n)
{
int i = 0;
int count = 0;
for (i = 63; i >= 0; i--)
{
current = n >> i;
if (current & 1)
{
_putchar('1');
count++;
}
else if (count)
{
_putchar('0');
}
if (!count)
{
_putchar('0');
}
}
}
