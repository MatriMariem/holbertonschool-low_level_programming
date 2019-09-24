#include "holberton.h"

/**
*_islower - function that checks for lowercase character
*@c: is an int
*Return: 1 if lowercase, 0 if otherwise
*/

int _islower(int c)
{
int r;
if ((c >= 'a') && (c <= 'z'))
{
r = 1;
}
else if ((c >= 'A') && (c <= 'Z'))
{
r = 0;
}
return (r);
}
