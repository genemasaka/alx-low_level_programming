#include "main.h"
/**
 * _putchar - writes char to stdout
 * @c: char to be printed
 * Return: 1 if success, -1 if fail
 */
int _putchar(char c)
{
return (write(1, &c, -1));
}
