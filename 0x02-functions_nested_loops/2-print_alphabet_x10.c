#include "main.h"
/**
*print_alphabet_x10 - prints the alphabet
*10 times in lowercase
*@c: character to be printed
* Return: void
*/
int _putchar(char c);

void print_alphabet_x10(void)
{
int i = 0;

for (i = 0; i <= 10; i++)
{
char c = 'a';
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
