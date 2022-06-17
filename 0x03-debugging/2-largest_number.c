#include "main.h"
/**
 * largest_number - return the largest number
 * @a: int 1
 * @b: int 2
 * @c: int 3
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
int largest;
if (a >= b && a >= c)
{
largest = a;
}
else if (b >= a && b >= c)
{
largest = b;
}
else
{
largest = c;
}
return (largest);
}
