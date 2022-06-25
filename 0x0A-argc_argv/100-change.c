#include <stdio.h>
#include <stdlib.h>
/**
 * main - determine number of coins to make change
 * @argc: argument counter
 * @argv: array of arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
int change, total, position, aux;
int coins[] = {25, 10, 5, 2, 1};
total = position = change = aux = 0;
if (argc != 2)
{
printf("Error\n");
return (1);
}
total = atoi(argv[1]);
if (total <= 0)
{
printf("0\n");
return (0);
}
while (coins[position] != '\0')
{
if (total >= coins[position])
{
aux = (total / coins[position]);
change += aux;
total -= coins[position] * aux;
}
position++;
}
printf("%d\n", change);
return (0);
}
