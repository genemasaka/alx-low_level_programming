#include "main.h"
/**
 *malloc_checked - allocates memory using malloc
 *@a: size of memory
 *Return: void
 */
void *malloc_checked(unsigned int a)
{
void *n;
n = malloc(a);
if (n == NULL)
{
exit(98);
}
return (n);
}
