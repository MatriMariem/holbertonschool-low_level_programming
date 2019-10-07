#include "holberton.h"
/**
*print_chessboard - prints chessboard
*@a: pointer to 2d array
*/
void print_chessboard(char (*a)[8])
{
int i, j;
for (i = 0; a[i][j] != '\0'; i++)
{
for (j = 0; a[i][j] != '\0'; j++)
{
_putchar(a[i][j];
}
}
}
