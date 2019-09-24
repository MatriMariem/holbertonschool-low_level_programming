#include "holberton.h"

/**
*print_sign - checks the sign of an int
*@n: is an int
*Return: 1 or 0 or -1 if n is positive, zero or negative
*/

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
