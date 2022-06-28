#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *simple_print_ptr - prints address in hexadecimal
 *@ptr: address of memory
 *@size: size of memory
 *Return: void
 */
void simple_print_ptr(char *ptr, unsigned int size)
{
unsigned int i;
i = 0;
while (i < size)
{
if (i % 10)
{
printf(" ");
}
if (!(i % 10) && i)
{
printf("\n");
}
printf("0x%02x", ptr[i]);
i++;
}
printf("\n");
}
/**
 *main - creates an array and initializes it with char
 *Return - Always 0
 */
int main(void)
{
char *ptr;
ptr = create_array(98, 'H');
if (ptr == NULL)
{
printf("failed to allocate memory\n");
return (1);
}
simple_print_ptr(ptr, 98);
free(ptr);
return (0);
}
