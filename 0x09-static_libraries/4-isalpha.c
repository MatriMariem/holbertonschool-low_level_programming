#include "holberton.h"

/**
*_isalpha - check if c is a letter or not
*@c: is an int
*Return: 1 if letter and 0 otherwise
*/

int _isalpha(int c)
{
int r;
if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
{
r = 1;
}
else
{
r = 0;
}
return (r);
}
