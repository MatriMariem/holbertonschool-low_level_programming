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
for (i = 3; i <= 45; i++)
{
z = x + y;
printf("%ld, ", z);
x = y;
y = z;
}
xd = x / 1000000000;
xr = x % 1000000000;
yd = y / 1000000000;
yr = y % 1000000000;
for (i = 46; i <= 97; i++)
{
p1 = xr + yr;
p2 = xd + yd;
if (p1 > 1000000000)
{
p1 = p1 % 1000000000;
p2++;
}
printf("%ld%ld, ", p2, p1);
xd = yd;
xr = yr;
yd = p2;
yr = p1;
}
printf("%ld%ld\n", p2, p1);
return (0);
}
