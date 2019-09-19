#include <stdio.h>
/**
* main - Entry point
* print all single digits from 00 to 100
* Return: Always 0 (Success)
*/
int main(void)
{
int x, y;
for (x = 0; x <= 9; x++)
{
for (y = 0; y <= 9; y++)
{
if (x != y && x < y)
{
putchar(x + '0');
putchar(y + '0');
if (!(x == 8 && y == 9))
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
