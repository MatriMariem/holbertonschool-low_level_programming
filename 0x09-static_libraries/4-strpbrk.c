#include "holberton.h"
/**
*_strpbrk - returns first occurence of accept in s
*@s: pointer to string
*@accept: char
*Return: first occurence
*/
char *_strpbrk(char *s, char *accept)
{
int i = 0, j = 0, t = 0;
while ((s[i] != '\0') && (t == 0))
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
return (&(s[i]));
t = 1;
}
}
i++;
}
return (0);
}
