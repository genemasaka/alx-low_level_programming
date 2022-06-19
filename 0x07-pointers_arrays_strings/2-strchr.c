#include "main.h"
/**
 * _strchr - finds a char in a string
 * @s: string
 * @c: char
 * Return: s
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
++s;
}
if (*s == c)
{
return (s);
}
return (0);
}
