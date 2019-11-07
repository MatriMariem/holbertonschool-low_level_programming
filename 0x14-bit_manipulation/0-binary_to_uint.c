#include "holberton.h"

/**
*binary_to_uint - converts a binary number to an unsigned int
*@b: pointer to a string of a 0 and 1 characters
*Return: the converted number or 0 if fails
*/
unsigned int binary_to_uint(const char *b)
{
int i, j, len;
unsigned int sum = 0, mul;
if (b == '\0')
return (0);

for (len = 0; b[len]; len++)
{
if (b[len] != 48 && b[len] != 49)
return (0);
}

len--;

for (i = 0; b[i]; i++)
{
mul = 1;

for (j = 1; j <= (len - i); j++)
mul = mul * 2;

mul = mul * (b[i] - '0');
sum = sum + mul;
}
return (sum);
}
