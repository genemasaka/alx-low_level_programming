#include "main.h"

/**
*_strlen - function that determines
*length of a string
*@s: pointer to string whose length will be determined
*Return: b;
*/
int _strlen(char *s)
{
int b;
b = 0;
while (s[b] != '\0')
{
b++;
}
return (b);
}
