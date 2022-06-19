#include <unistd.h>
/**
 *_putchar - prints char to stdout
 *@c: char
 *Return: Success 1, error -1
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
