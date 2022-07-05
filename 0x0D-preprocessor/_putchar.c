#include <stdlib.h>
/**
 * _putchar - writes char to stdout
 * @c: char to write
 * Return: On succes 1, on error -1
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
