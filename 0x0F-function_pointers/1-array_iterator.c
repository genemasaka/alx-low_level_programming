#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - executes function given as parameter
 * on elements of an array
 * @array: array to iterate through
 * @size: size of array
 * @action: pointer to function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (!array || !action)
{
return;
}
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
