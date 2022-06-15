#include "main.h"
/**
 *string_toupper - transforms all lowercase chars of a string to
 *uppercase
 *@str: string
 *Return: char
 */
char *string_toupper(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 32;
}
}
return (str);
}
