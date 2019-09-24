#include "holberton.h"

/**
*print_last_digit - gives last digit
*@n: is an int
*Return: last digit
*/

int print_last_digit(int n)
{
int l;
if (n < 0)
{
n = n * (-1);
}
l = n % 10;
_putchar(l + '0');
return (l);
}
