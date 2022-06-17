#include "main.h"
/**
 * print_square - prints a square
 * @size: size
 * Return: void
 */
void print_square(int size)
{
int i, p;
if (size > 0)
{
for (i = 0; i < size; i++)
{
for (p = 0; p < size; p++)
{
_putchar(35);
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
