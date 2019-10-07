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
s[j] = s[i];
i++;
j++;
}
s[j] = '\0';
return (s);
}
else
{
return (NULL);
}
}
