#include "holberton.h"
/**
*_strstr - returns first occurence of needle in haystack
*@haystack: pointer to string
*@needle: pointer to a string
*Return: pointer to first occurence
*/
char *_strstr(char *haystack, char *needle)
{
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
while ((haystack[i] == needle[j]) && (needle[j] != '\0'))
{
i++;
j++;
}
if (j == l)
{
return (&(haystack[i - l]));
t = 1;
}
else
{
i--;
}
}
}
}
