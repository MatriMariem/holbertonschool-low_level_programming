#include "holberton.h"
#include <stdio.h>

/**
*print_to_98 - prints from n to 98
*@n: is an int
*Return: list
*/

void print_to_98(int n)
{
if (n == 98)
{
printf("%d", n);
}
else if (n > 98)
{
for (; n > 98; n--)
{
printf("%d, ", n);
}
printf("%d", 98);
}
else
{
for (; n < 98; n++)
{
printf("%d, ", n);
}
printf("%d", 98);
}
printf("\n");
}
