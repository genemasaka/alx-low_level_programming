#include "main.h"
/**
 *square_root - evaluates sqrt
 *@i: int
 *@n: int
 *Return: result of square_root
 */
int square_root(int i, int n)
{
if (n == 0 || n == 1)
{
return (n);
}
else if (i * i < n)
{
return (square_root(i + 1, n));
}
else if (i * i == n)
{
return (i);
}
return (-1);
}
/**
 * _sqrt_recursion - returns natural square root of anumber
 * @n: int
 * Return: result of _sqrt_recursion
 */
int _sqrt_recursion(int n)
{
int i = 0;
if (i < 0)
{
return (-1);
}
else
{
return (square_root(i, n));
}
}
