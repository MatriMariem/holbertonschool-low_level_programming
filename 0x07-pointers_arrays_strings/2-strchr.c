#include "holberton.h"
/**
*_strchr - returns the s starting from c
*@s: pointer to string
*@c: character
*Return: pointer of first occurence of c
*/
char *_strchr(char *s, char c)
{
int i = 0, l = 0;
while (s[l])
{
l++;
}
for (i = 0; i <= l; i++)
{
if (s[i] == c)
{
return (&(s[i]));
}
}
return (0);
}
