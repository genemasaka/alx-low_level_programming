#include "main.h"
/**
 *print_last_digit - prints last digit of a number
 *@n: int
 *Return: int
 */
int print_last_digit(int n)
{
int last;
if (n < 0)
{
last = (-1 * (n % 10));
_putchar(last + '0');
return (last);
}
else
{
last = (n % 10);
_putchar(last + '0');
return (last);
}
}
