#include "holberton.h"
#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
long x, y, z, i, xd, xr, yd, yr, p1, p2;
x = 1;
y = 2;
printf("%ld, %ld, ", x, y);
for (i = 3; i <= 91; i++)
{
z = x + y;
x = y;
y = z;
printf("%ld, ", z);
}
xd = x / 10000000000;
xr = x % 10000000000;
yd = y / 10000000000;
yr = y % 10000000000;
for (; i <= 98; i++)
{
p1 = xr + yr;
p2 = xd + yd;
if (p1 > 10000000000)
{
p1 = p1 % 10000000000;
p2++;
}
if (i != 98)
{
printf("%ld%ld, ", p2, p1);
xd = yd;
xr = yr;
yd = p2;
yr = p1;
}
else
{
printf("%ld%ld\n", p2, p1);
}
}
return (0);
}
