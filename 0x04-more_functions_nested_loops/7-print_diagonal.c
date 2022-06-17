#include "main.h"
/**
 * print_diagonal - prints diagonal line
 * @n: int
 * Return: void
 */
void print_diagonal(int n)
{
int i, q;
if (n > 0)
{
for (i = 0; i < n; i++)
{
for (q = 0; q < i; q++)
{
_putchar(' ');
}
_putchar(92);
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
