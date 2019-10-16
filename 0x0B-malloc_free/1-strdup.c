#include <stdlib.h>
#include "holberton.h"
/**
* _strdup - returns a pointer to a newly allocated space in memory, which
* contains a copy of the string given as a parameter
*@str: pointer to a string
* Return: pointer to a string
*/
char *_strdup(char *str)
{
int i, l;
char *new;
if (str == '\0')
{
return (0);
}
for (l = 0; str[l] != '\0';)
{
l++;
}
new = malloc(sizeof(char) * l + 1)
if (new == '\0')
{
return (0);
}
for (i = 0; i < l; i++)
{
new[i] = str[i];
}
new[l] = str[l];
return (new);
}
