#include "holberton.h"
/**
*_strchr - returns the s starting from c
*@s: pointer to string
*@c: character
*Return: pointer to a string
*/
char *_strchr(char *s, char c)
{
int i, j;
char dest[];
i = 0;
while ((s[i] != c) && (s[i] != '\0'))
{
i++;
}
if (s[i] == c)
{
j = 0;
while (s[i] != '\0')
{
dest[j] = s[i];
i++;
j++;
}
return (dest);
}
else
{
return (NULL);
}
}
