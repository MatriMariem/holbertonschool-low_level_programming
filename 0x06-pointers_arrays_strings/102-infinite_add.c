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
int i, j, k, l, small, ind, first, second, dec;
char tab1[];
char tab2[];
i = 0;
j = 0;
dec = 0;
while (n1[i] != '\0')
{
i++;
}
while (n2[j] != '\0')
{
j++;
}
if (i > j)
{
l = i;
small = j;
}
else if (j > i)
{
l = j;
small = i;
}
else
{
l = j;
small = 0;
}
if (l >= size_r)
return (0);
r[l] = '\0';
tab1[] = n1[];
tab2[] = n2[];
if ((i != j)&&(small != 0))
{
if (i == small)
{
for (ind = (small - 1); ind >= 0; ind--)
{
tab1[ind + (l - small)] = tab1[ind];
}
for (ind = 0; ind < (l - small); ind++)
{
tab1[ind] = '0';
}
}
else if (j == small)
{
for (ind = (small - 1); ind >= 0; ind--)
{
tab2[ind + (l - small)] = tab2[ind];
}
for (ind = 0; ind < (l - small); ind++)
{
tab2[ind] = '0';
}
}
}
for (k = l - 1 ; k >= 0 ; k--)
{
first = tab1[k] - '0';
second = tab2[k] - '0';
r[k] = (first + second + dec) % 10 + '0';
dec = (first + second + dec) / 10;
}
if (dec == 1)
{
r[l + 1] = '\0';
if (l + 2 > size_r)
{
return (0);
}
else
{
r[l] = dec;
}
}
return (r);
}
