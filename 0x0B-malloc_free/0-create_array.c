#include "main.h"
/**
 *create_array - creates an array that store an initial char
 *@size: number off elements in the array
 *@c: char
 *Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
char *ptr;
unsigned int i;
if (size == 0)
{
return (NULL);
}
ptr = (char *)malloc(size * sizeof(c));
if (ptr == 0)
{
return (NULL);
}
else
{
i = 0;
while (i < size)
{
*(ptr + i) =  c;
i++;
}
return (ptr);
}
}
