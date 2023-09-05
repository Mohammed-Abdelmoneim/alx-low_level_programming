#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *@width: width of an array
 *@height: height of an array
 *
 * Return: 0 success
 */
int **alloc_grid(int width, int height)
{
int **grid, i, j;
if (width <= 0 || height <= 0)
{
return (NULL);
}
grid = (int **)malloc(sizeof(int) * height);

for (i = 0; i < height; i++)
{
grid[i] = (int *)malloc(sizeof(int) * width);
if (grid[i] == NULL)
{
for (j = 0; j < i; j++)
{
free(grid[j]);
}
free(grid);
return (NULL);
}
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
grid[i][j] = 0;
}
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
printf("%d ", grid[i][j]);
}
printf("\n");
}
if (grid == NULL)
{
return (NULL);
}
return (grid);
}
