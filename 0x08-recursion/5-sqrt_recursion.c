#include "holberton.h"
/**
* _sqrt_recursion - gives sqrt of a number
*@n: number
*Return: int
*/
int _sqrt_recursion(int n)
{
return (find(0, n));
}
/**
* find - finds sqrt of a number
*@i: int to check with
*@n: number
*Return: int
*/
int find(int i, int n)
{
if (i > n)
{
return (-1);
}
else if (i * i == n)
{
return (i);
}
else
{
return (find(i + 1, n));
}
}
