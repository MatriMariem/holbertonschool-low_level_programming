#include <stdlib.h>
#include "holberton.h"
/**
* alloc_grid - returns a pointer to a 2d array
*@width: int
*@height: int
* Return: pointer to a 2d array of int
*/
int **alloc_grid(int width, int height)
{
int i, j;
int **Dim;
if ((width <= 0) || (height <= 0))
{
return (0);
}
Dim = malloc(sizeof(int) * height);
if (Dim == '\0')
{
return (0);
}
for (i = 0; i < height; i++)
{
Dim[i] = malloc(sizeof(int) * width);
if (Dim[i] == '\0')
{
return (0);
}
for (j = 0; j < width; j++)
{
Dim[i][j] = 0;
}
}
return (Dim);
}
