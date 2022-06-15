#include "main.h"
/**
*_strncat - concantenates s1 and s2
*@dest: a pointer to a character to be updated
*@src: a pointer to a character that will be updated
*@i: a value
*Return: dest
*/
char *_strncat(char *dest, char *src, int i)
{
int n;
int m;
n = 0;
while (dest[n] != '\0')
{
n++;
}
m = 0;
while (m < i && src[m] != '\0')
{
dest[n] = src[m];
m++;
n++;
}
dest[n] = '\0';
return (dest);
}
