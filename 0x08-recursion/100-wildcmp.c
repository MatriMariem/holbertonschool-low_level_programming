#include "holberton.h"
/**
*wildcmp - compares 2 strings including thr presence of * special character
*@s1: first string
*@s2: second string
*Return: 1 if same, 0 if not
*/
int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
{
return (1);
}
if (*s1 == *s2)
{
return (wildcmp(s1 + 1, s2 + 1));
}
if (*s1 == '\0' && *s2 == '*')
{
return (wildcmp(s1, s2 + 1));
}
if (*s2 == '*')
{
return ((wildcmp(s1, s2 + 1)) || (wildcmp(s1 + 1, s2)));
}
return (0);
}
