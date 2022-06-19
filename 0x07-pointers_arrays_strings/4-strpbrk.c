#include "main.h"
/**
 *_strpbrk - searches a string for a set of bytes
 *@s: string
 *@accept: char
 *Return: s
 */
char *_strpbrk(char *s, char *accept)
{
int j;
while (*s != '\0')
{
j = 0;
while (accept[j] != '\0')
{
if (*s == accept[j])
{
return (s);
}
j++;
}
s++;
}
return (0);
}
