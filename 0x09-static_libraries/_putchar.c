#include "main.h"
/**
 *_putchar - writes char to stdout
 *@c: char to write
 *Return: 1 success, -1 error
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
