#include "holberton.h"
/**
*cap_string - capitalize
*@s: string
*Return: string
*/
char *cap_string(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if ((i == 0) && (s[0] >= 'a') && (s[0] <= 'z'))
{
s[0] = s[0] - 32;
}
if (s[i] == 9 || s[i] == 10 || s[i] == 32 ||
s[i] == ',' || s[i] == ';' || s[i] == '.' ||
s[i] == '!' || s[i] == '?' || s[i] == '"' ||
s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
{
if ((s[i + 1] >= 'a') && (s[i + 1] <= 'z'))
{
s[i + 1] = s[i + 1] - 32;
}
}
}
return (s);
}
