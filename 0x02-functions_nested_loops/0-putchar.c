#include <unistd.h>

/**
*_putchar - function that prints
*_putchar
*/

int _putchar(char c)
{
return (write(1, &c, 1));
}
