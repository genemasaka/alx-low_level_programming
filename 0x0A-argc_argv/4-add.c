#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int _assess_num(char *str);
/**
 *main - adds positive numbers
 *@argc: argument counter
 *@argv: array of arguments
 *Return: Always 0
 */
int main(int argc, char *argv[])
{
int c;
int str_to_int;
int sum = 0;
c = 1;
while (c < argc)
{
if (_assess_num(argv[c]))
{
str_to_int = atoi(argv[c]);
sum += str_to_int;
}
else
{
printf("Error\n");
return (1);
}
c++;
}
printf("%d\n", sum);
return (0);
}
/**
 *_assess_num - checks idf there are digits in the str
 *@str: string
 *Return: Always 0
 */
int _assess_num(char *str)
{
unsigned int c;
c = 0;
while (c < strlen(str))
{
if (!isdigit(str[c]))
{
return (0);
}
c++;
}
return (1);
}
