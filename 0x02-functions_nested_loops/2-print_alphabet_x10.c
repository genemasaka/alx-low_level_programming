#include "main.h"
/**
*print_alphabet_x10 - prints the alphabet
*10 times in lowercase
*@c: character to be printed
* Return: void
*/
void print_alphabet_x10(void)
{
int a, c;
c = 0;
while (c < 10)
{
for (a = 'a'; a <= 'z'; a++)
{
_putchar(a);
}
c++;
_putchar('\n');
}
}
