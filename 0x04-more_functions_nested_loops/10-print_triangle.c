#include "holberton.h"
/**
*print_triangle - prints a triangle
*@size: is an int
* Return: void
*/
void print_triangle(int size)
{
int i, j;
if (size > 0)
{
for (i = 1; i <= size; i++)
{
j = 1;
while (j <= size - i)
{
_putchar(' ');
j++;
}
while (j <= size)
{
_putchar('#');
j++;
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
