#include "main.h"
/**
 * _strlen - finds the length of a str
 * @s: str
 * Return: i
 */
int _strlen(char *s)
{
unsigned int m;
m = 0;
while (s[m] != '\0')
{
m++;
}
return (m);
}
/**
 *str_concat - concatenates two string
 *@s1: string 1
 *@s2: string 2
 *Return: array in dynamic memory
 */
char *str_concat(char *s1, char *s2)
{
char *dest;
unsigned int e, f, size;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
size = (_strlen(s1) + _strlen(s2) + 1);
dest = (char *) malloc(size *sizeof(char));
if (dest == 0)
{
return (NULL);
}
for (e = 0; *(s1 + 1) != '\0'; e++)
{
*(dest + e) = *(s1 + e);
}
for (f = 0; *(s2 + f) != '\0'; f++)
{
*(dest + e) = *(s2 + f);
e++;
}
return (dest);
}
