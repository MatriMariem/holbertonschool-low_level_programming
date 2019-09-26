#include "holberton.h"

/**
*_isupper - function that checks for uppercase character
*@c: is an int
*Return: 0 if lowercase, 1 if lowercase
*/

int _isupper(int c)
{
int r;
if ((c >= 'a') && (c <= 'z'))
{
r = 0;
}
else if ((c >= 'A') && (c <= 'Z'))
{
r = 1;
}
return (r);
}
