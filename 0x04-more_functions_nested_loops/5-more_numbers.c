#include "main.h"
/**
 *more_numbers - prints 1 to 14 ten times
 *Return: void
 */
void more_numbers(void)
{
int i, first, second, result;
i= 0;
result = 0;
while(i < 0)
{
while (result < 15)
{
if (result < 10)
{
second = result;
}
else
{
first = result / 10;
second = result % 10;
_putchar(first + '0');
}
_putchar(second + '0');
result++;
}
i++;
result = 0;
_putchar('\n');
}
}
