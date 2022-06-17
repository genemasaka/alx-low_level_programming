#include <stdio.h>
/**
 * main - entry
 * Return: void
 */
int main(void)
{
int p = 100;
int n;
n= 1;
while ( n <= p)
{
if (n % 3 == 0 && n % 5 == 0)
{
printf("FizzBuzz ");
}
else if (n % 3 == 0)
{
printf("Fizz ");
}
else if (n % 5 == 0)
{
if (n < p)
{
printf("Buzz ");
}
else
{
printf("Buzz");
}
}
else
{
printf("%i ", n);
}
n++;
}
printf("\n");
return (0);
}
