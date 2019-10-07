#include "holberton.h"
/**
*_strstr - returns first occurence of needle in haystack
*@haystack: pointer to string
*@needle: pointer to a string
*Return: pointer to first occurence
*/
char *_strstr(char *haystack, char *needle)
{
int i, l, j, t = 0;
l = 0;
while (needle[l] != '\0')
{
l++;
}
for (i = 0; ((haystack[i] != '\0') && (t == 0)); i++)
{
if (haystack[i] == needle[0])
{
j = 0;
while ((haystack[i + j] == needle[j]) && (needle[j] != '\0'))
{
j++;
}
if (j == l)
{
return (&(haystack[i]));
t = 1;
}
}
}
return (0);
}
