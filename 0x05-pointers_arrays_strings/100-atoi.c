#include "holberton.h"
/**
* _atoi - converts a string into an integer
*@s: pointer to a string
*Return: the integer
*/
int _atoi(char *s)
{
int i, integer, sign = 1;
i = 0;
integer = 0;
while (!((s[i] >= '0') && (s[i] <= '9')) && (s[i] != '\0'))
{
if (s[i] == '-')
{
sign = sign * (-1);
}
i++;
}
while ((s[i] >= '0') && (s[i] <= '9'))
{
integer = (integer * 10) + (sign * (s[i] - '0'));
i++;
}
return (integer);
}
