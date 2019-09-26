#include "holberton.h"
/**
*print_number - prints from 0 to 9
*@n: int
* Return - void
*/
void print_number(int n)
{
int i, j, num, div;
if (n < 0)
{
n = n * (-1);
_putchar('-');
}
num = n;
i = 1;
while ((num / 10) != 0)
{
num = num / 10;
i++;
}
div = 1;
for (j = 1; j <= i - 1; j++)
{
div = div * 10;
}
while (div >= 1)
{
_putchar((n / div)+'0');
n = n % div;
div = div / 10;
}
}
