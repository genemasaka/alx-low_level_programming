#include "main.h"
/**
 *_strlen - count the length of a str
 *@s: string
 *Return: 1
 */
int _strlen(char *s)
{
unsigned int i;
i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
/**
 *_strcpy - copies string
 *@src: source string
 *@dest: array
 *Return: dest
 */
char *_strcpy(char *dest, char *src)
{
int i;
i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}
/**
 * _strdup - copies string to a new mem location on heap
 * @str: string
 * Return: pointer
 */
char *_strdup(char *str)
{
char *dest;
unsigned int size;
if (str == 0)
{
return (NULL);
}
size = _strlen(str) + 1;
dest = (char *) malloc(size *sizeof(char));
if (dest == 0)
{
return (NULL);
}
_strcpy(dest, str);
return (dest);
}
