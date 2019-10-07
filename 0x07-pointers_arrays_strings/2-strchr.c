#include "holberton.h"
/**
*_strchr - returns the s starting from c
*@s: pointer to string
*@c: character
*Return: pointer of first occurence of c
*/
char *_strchr(char *s, char c)
{
int i = 0;
while (s[i] != '\0')
{
if (s[i] == c)
{
return (&s[i]);
}
i++;
}
return (0);
}
