#include "holberton.h"
/**
*_strspn - returns unsigned int
*@s: pointer to string
*@accept: char
*Return: length
*/
unsigned int _strspn(char *s, char *accept)
{
int i, j;
unsigned int count;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
count++;
}
}
}
return (count);
}
