#include "holberton.h"

/**
*_isupper - function that checks for uppercase character
*@c: is an int
*Return: 1 if uppercase, 0 if else
*/

int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
