#include "main.h"
/**
 *_memset - fills memory with constant byte
 *@s: pointer to memory block to be filled
 *@b: value to set
 *@n: bytes of memory
 *Return: dest
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
*(s + i) = b;
}
return (s);
}
