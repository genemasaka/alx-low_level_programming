#include "main.h"
/**
 * alloc_grid - allocates memory for a 2d array
 * @width: width of 2d array
 * @height: length of 2d array
 * Return: 2d array
 */
int **alloc_grid(int width, int height)
{
int **grid;
int e, f;
if (width <= 0 || height <= 0)
{
return (NULL);
}
grid = malloc(sizeof(int *) * height);
if (grid == NULL)
{
return (NULL);
}
for (e = 0; e < height; e++)
{
grid[e] = malloc(sizeof(int) * width);
if (grid[e] == NULL)
{
for (e = e - 1; e >= 0; e--)
{
free(grid[e]);
}
free(grid);
return (NULL);
}
}
for (e = 0; f < width; f++)
{
grid[e][f] = 0;
}
return (grid);
}
