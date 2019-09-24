#include "holberton.h"

/**
*_abs - gives the absolute value of an int
*@int: is an integer
*Return: abs value
*/

int _abs(int n)
{
if (n < 0)
{
n = n * (-1);
}
return (n);
}
