#include "holberton.h"
/**
*_strcmp - compares 2 strings
*@s1: pointer to the first string
*@s2: pointer to the second string
*Return: an int
*/
int _strcmp(char *s1, char *s2)
{
int result, i = 0;
while ((s1[i] == s2[i]) && ((s1[i]) || (s2[i])))
{
i++;
result = 0;
}
if (s1[i] != s2[i])
{
result = s1[i] - s2[i];
}

return (result);
}
