#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * free_grid - frees a 2 dimensional grid
 *@grid: array
 *@height: height of an array
 */
void free_grid(int **grid, int height)
{
int i;
if (grid == NULL)
{
return;
}
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
