#include "main.h"

/**
*print_alphabet - prints alphabet in lowercase
*@c: the value being returned.
*Return: void
*/

int _putchar(char c);

void print_alphabet(void)
{
char c = 'a';
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
}

