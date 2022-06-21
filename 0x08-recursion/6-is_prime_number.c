#include "main.h"
/**
 *assess - evaluates whether num is prime or not
 *@num: number
 *@i: number
 *Return: 1 or 0
 */
int assess(int num, int i)
{
if (i == num - 1)
{
return (1);
}
else if (num % i == 0)
{
return (0);
}
if (num % i != 0)
{
return (assess(num, i + 1));
}
return (0);
}
/**
 *is_prime_number - checks if number is prime or not
 *@num: number
 *Return: 1 if prime and 0 if not
 */
int is_prime_number(int num)
{
int i = 2;
if (num < 2)
{
return (0);
}
if (num == 2)
{
return (1);
}
return (assess(num, i));
}
