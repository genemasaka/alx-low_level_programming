#include "main.h"
/**
 * _calloc - allocates memory for an array
 *@n: number of elements in array
 *@size: bytes for each element in array
 *Return: void
 */
void *_calloc(unsigned int n, unsigned int size)
{
char *ptr;
unsigned int i;
if (n == 0 || size == 0)
{
return (NULL);
}
ptr = malloc(n * size);
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; i < n * size; i++)
{
ptr[i] = 0;
}
return (ptr);
}
