#include "main.h"
/**
*_strcpy - copies a string
*@dest: pointer to a char that will be updated
*@src: a pointer to a char that will be updated
*Return: dest
*/
char *_strcpy(char *dest, char *src)
{
int x;
x = 0;
while (src[x] != '\0')
{
dest[x] = src[x];
x++;
}
dest[x] = '\0';
return (dest);
}
