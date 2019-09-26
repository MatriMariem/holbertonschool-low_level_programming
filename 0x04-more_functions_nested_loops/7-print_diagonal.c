#include "holberton.h"
/**
*print_diagonal - draws a straight line
*@n: is an int
* Return: void
*/
void print_diagonal(int n)
{
int i, j;
if (n > 0)
{
for (i = 1; i <= n; i++)
{
j = 1;
while (j < i)
{
_putchar(' ');
j++;
}
_putchar('\\');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
