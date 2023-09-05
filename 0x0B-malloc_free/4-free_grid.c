#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
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
