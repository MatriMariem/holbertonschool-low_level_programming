#include "holberton.h"
#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
int x, y, z, i;
x = 1;
y = 2;
printf("%d, %d, ", x, y);
for (i = 3; i <= 97; i++)
{
z = x + y;
printf("%d, ", z);
x = y;
y = z;
}
printf("%d\n", z);
return (0);
}
