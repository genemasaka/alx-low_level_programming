#include <unistd.h>
/**
 *_putchar - writes char to stdout
 *@c: char to be written
 *Return: 1 on success, -1 on failure
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
