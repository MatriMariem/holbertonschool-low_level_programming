#include "holberton.h"

/**
*times_table - gives the times table
*
*Return: void
*/

void times_table(void)
{
int i, j, r;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
r = i * j;
if ((r == 0) && (j == 0))
{
_putchar(r + '0');
}
else if (r <= 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(r + '0');
}
else
{
_putchar(',');
_putchar(' ');
_putchar(r / 10 + '0');
_putchar(r % 10 + '0');
}
if (j == 9)
{
_putchar('$');
}
}
_putchar('\n');
}
}
