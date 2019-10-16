#include <stdlib.h>
#include "holberton.h"
/**
* free_grid - returns a pointer to a 2d array
*@grid: 2d array
*@height: int
*/
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
