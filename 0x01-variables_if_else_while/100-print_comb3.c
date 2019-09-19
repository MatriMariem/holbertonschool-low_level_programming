#include <stdio.h>
/**
* main - Entry point
* print all single digits from 00 to 100
* Return: Always 0 (Success)
*/
int main(void)
{
int x, y, i, j;
for (x = 0; x <= 9; x++)
{
for (y = 0; y <= 9; y++)
{
if (x != y)
{
if (x < y)
{
i = x;
j = y;
}
else
{
i = y;
j = x;
}
putchar(i + '0');
putchar(j + '0');
if (!(i == 8 && j == 9))
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
