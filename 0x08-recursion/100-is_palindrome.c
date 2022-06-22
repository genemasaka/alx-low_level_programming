#include "main.h"
/**
 *_strlen_recursion - determines length of string
 *@s: string
 *Return: result fo _strlen_recursion
 */
int _strlen_recursion(char *s)
{
if (!*s)
{
return (0);
}
return (1 + _strlen_recursion(++s));
}
/**
 *drome - determines whether string reads the same forward
 *and backward
 *@s: string
 *@p: position
 *Return:  result of drome
 */
int drome(char *s, int p)
{
if (p < 1)
{
return (1);
}
if (*s == *(s + 1))
{
return (drome(s + 1, p - 2));
}
return (0);
}
/**
 *is_palindrome - checks whether string reads the same
 *bakcwards and forwards
 *@s: string
 *Return: result of is_palindrome recusrion
 */
int is_palindrome(char *s)
{
int len = _strlen_recursion(s);
return (drome(s, len - 1));
}
