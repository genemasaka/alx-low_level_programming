#include "main.h"
/**
*_strcat - contantenates s1 and s2
*@dest: pointer to a character that  will be updated
*@src: pointer to a character that will be updated
*Return: dest
*/
char *_strcat(char *dest, char *src)
{
int n;
int m;
n = 0;
while (dest[n] != '\0')
{
n++;
}
m = 0;
while (src[m] != '\0')
{
dest[n] = src[m];
m++;
n++;
}
dest[n] = '\0';
return (dest);
}
