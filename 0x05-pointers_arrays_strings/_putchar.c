#include <unistd.h>
/**
* _putchar - prints the char l to stdout
*@l: the character to be printed
*Return: success 1.
*error -1 is returned.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
