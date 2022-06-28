#include "main.h"
/**
 *free_grid - allocates memory for 2d array
 *@grid: 2d array
 *@height: height of 2d array
 *Return: void
 */
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
