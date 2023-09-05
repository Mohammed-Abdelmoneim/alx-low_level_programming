#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * str_concat -  concatenates two strings.
 *@s1: first string
 *@s2: second string
 *
 * Return: 0 success
 */
int **alloc_grid(int width, int height)
{
  int *grid;
  int i,j;
  if (width == 0 || height == 0)
  {
    return NULL;
  }
  grid = malloc(sizeof(int) * (width * height));
if (grid == NULL)
{
return (NULL);
}
  for (i = 0; i < width; i++)
  {
    for (j = 0; j < height; j++)
    {
      printf("%d ", grid[i]);
    }
    printf("\n");
  }
  return (0);
}
