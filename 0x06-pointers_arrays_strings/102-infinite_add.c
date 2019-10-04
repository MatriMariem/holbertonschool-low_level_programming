#include "holberton.h"

/**
* infinite_add -  adds two numbers in strings
* @n1: first string
* @n2: second string
* @r: result num string
* @size_r: size of r string
* Return: sum
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i = 0, j = 0, k, l = 0, first, second, dec = 0;
while (n1[i] != '\0')
i++;
while (n2[j] != '\0')
j++;
if (i > j)
l = i;
else
l = j;
if (l >= size_r)
return (0);
r[l] = '\0';
for (k = l - 1 ; k >= 0 ; k--)
{
i--;
j--;
if (i >= 0)
first = n1[i] - '0';
else
first = 0;
if (j >= 0)
second = n2[j] - '0';
else
second = 0;
r[k] = (first + second + dec) % 10 + '0';
dec = (first + second + dec) / 10;
}
if (dec == 1)
{
r[l + 1] = '\0';
if (l + 1 >= size_r)
return (0);
while (l-- >= 0)
r[l + 1] = r[l];
r[0] = dec + '0';
}
return (r);
}
