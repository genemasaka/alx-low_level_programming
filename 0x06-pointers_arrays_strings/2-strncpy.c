#include "main.h"
/**
 * _strncpy - duplicates a string
 * @dest: a pointer to a character that will be updated
 * @src: a pointer to a character that will be updated
 * @n: a value
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
i = 0;
while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (0);
}
