#include <stdlib.h>
#include "holberton.h"
/**
* str_concat - concatenates two strings
*@s1: pointer to a string
*@s2: pointer to a string
* Return: pointer to a string
*/
char *str_concat(char *s1, char *s2)
{
char *new;
int i, l1 = 0, l2 = 0;
if (s1 != '\0')
{
while (s1[l1] != '\0')
l1++;
}
if (s2 != '\0')
{
while (s2[l2] != '\0')
l2++;
}
new = malloc(sizeof(char) * (l1 + l2 + 1));
if (new == '\0')
{
return (0);
}
for (i = 0; i < l1; i++)
{
new[i] = s1[i];
}
for (i = 0; i < l2; i++)
{
new[i + l1] = s2[i];
}
new[l1 + l2] = '\0';
return (new);
}
