#include <stdio.h>
/**
* main - Entry point
* print all single digits from 00 to 100
* Return: Always 0 (Success)
*/
int main(void)
{
int x, y, z, w;
for (x = 0; x <= 9; x++)
{
for (y = 0; y <= 9; y++)
{
for (z = 0; z <= 9; z++)
{
for (w = 0; w <= 9; w++)
{
if (x < z || (x == z && y < w))
{
putchar(x + '0');
putchar(y + '0');
putchar(' ');
putchar(z + '0');
putchar(w + '0');
if (!(x == 9 && y == 8 && z == 9 && w == 9))
{
putchar(',');
putchar(' ');
}
}
}
}
}
}
putchar('\n');
return (0);
}
