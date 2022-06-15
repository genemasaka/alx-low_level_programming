/**
*_putchar - prints the character to stdout
*@c: character to print
*Return: Success 1
*On error return -1
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
