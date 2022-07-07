#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name_as_is - prints name as is
 * @name: name of the person
 * Return: void
 */
void print_name_as_is(char *name)
{
printf("Hello, my name is %s\n", name);
}
/**
 * print_name_uppercase - prints a name in uppercase
 * @name: name to be printed
 * Return: void
 */
void print_name_uppercase(char *name)
{
unsigned int i;
printf("Hello, my upercase name is ");
i = 0;
while (name[i])
{
if (name[i] >= 'a' && name[i] <= 'z')
{
putchar(name[i] + 'A' - 'a');
}
else
{
putchar(name[i]);
}
i++;
}
}
/**
 * main - prints a name
 * Return: Always 0
 */
int main(void)
{
print_name("Bob", print_name_as_is);
print_name("Bob Dylan", print_name_uppercase);
printf("\n");
return (0);
}
