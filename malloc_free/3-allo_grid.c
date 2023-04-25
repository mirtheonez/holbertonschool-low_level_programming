#include "main.h"
#include <stdlib.h>
/**
* alloc_grid - returns a pointer to a 2 dimensional array of integers.
* @width: width.
* @height: height.
* Return: fail if width & height <= 0, otherwise a pointer.
*/
int **alloc_grid(int width, int height)
{
int **grid;
int h, w;
if (width <= 0 || height <= 0)
return (NULL);
grid = malloc(sizeof(int *) * height);
if (grid == NULL)
return (NULL);
for (h = 0; h < height; h++)
{
grid[h] = malloc(sizeof(int) * width);
if (grid[h] == NULL)
{
for (; h >= 0; h--)
free(grid[h]);
free(grid);
return (NULL);
}
}
for (h = 0; h < height; h++)
{
for (w = 0; w < width; w++)
grid[h][w] = 0;
}
return (grid);
}