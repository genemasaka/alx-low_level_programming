#include "main.h"
/**
*is_number - checks if n is a digit
*@n: number
*Return: If n is a number return 1 otherwise return 0
*/
int is_number(unsigned int n)
{
return (n >= '0' && n <= '9');
}
/**
*_atoi - converts string to int
*@s: string
*Return: return number
*/
int _atoi(char *s)
{
unsigned int number;
int i;
int sign;
sign = 1;
number = 0;
for (i = 0; s[i] != '\0'; i++)
{
if (is_number(s[i]))
{
number = (s[i] - 48) + number * 10;

if (s[i + 1] == ' ')
break;
}
else if (s[i] == '-')
{
sign *= -1;
}

}
return (number *sign);
}
