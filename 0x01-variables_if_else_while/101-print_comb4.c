#include <stdio.h>
/**
* main - Entry point
* print all single digits from 00 to 100
* Return: Always 0 (Success)
*/
int main(void)
{
int x, y, z;
for (x = 0; x <= 9; x++)
{
for (y = 0; y <= 9; y++)
{
for (z = 0; z <= 9; z++)
{
if (x != y && x != z && x < y && y < z)
{
putchar(x + '0');
putchar(y + '0');
putchar(z + '0');
if (!(x == 7 && y == 8 && z == 9))
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
