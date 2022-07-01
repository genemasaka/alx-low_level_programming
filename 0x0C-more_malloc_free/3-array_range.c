#include "main.h"
/**
 * array_range - creates array of ints
 * @min: minimum value
 * @max: max value
 * Return: a
 */
int *array_range(int min, int max)
{
int *a;
int i = 0;
int t = min;
if (min > max)
{
return (0);
}
a = malloc((max - min + 1) * sizeof(int));
if (!a)
{
return (0);
}
while (i <= max - min)
{
a[i++] = t++;
}
return (a);
}
