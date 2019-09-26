#include "holberton.h"
/**
*print_line - draws a straight line
*@n: is an int
* Return: void
*/
void print_line(int n)
{
int i;
if (n > 0)
{
for (i = 1; i <= n; i++)
{
_putchar('_');
}
}
_putchar('\n');
}
