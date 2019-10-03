#include "holberton.h"
/**
*print_number - prints an integer
*@n: int
* Return - void
*/
void print_number(int n)
{
int i, num, div, o;
o = n % 10;
n = n / 10;
if (o < 0)
{
n = -n;
o = -o;
_putchar('-');
}
num = n;
div = 1;
if (num > 0)
{
while ((num / 10) != 0)
{
num = num / 10;
div = div * 10;
}
while (div >= 1)
{
i = n / div;
_putchar(i + '0');
n = n % div;
div = div / 10;
}
}
_putchar(o + '0');
}
