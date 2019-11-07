#include "holberton.h"
/**
* print_binary - prints the binary number of an unsigned long int
* @n: the number that will be converted
*/
void print_binary(unsigned long int n)
{

if (n == 0 || n == 1)
{
_putchar(n + '0');
}
else
{

print_binary(n >> 1);
_putchar((n & 1) + '0');
}
}
