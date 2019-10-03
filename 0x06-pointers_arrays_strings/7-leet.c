#include "holberton.h"
/**
*leet - converts string to leet 1337
*@s: pointer to a string
*Return: pointer to char
*/
char *leet(char *s)
{
int i, j;
char letter[] = "aeotlAEOTL";
char num[] = "4307143071";
for (i = 0; s[i] != '\0'; i++)
{
j = 0;
while (letter[j] != '\0')
{
if (s[i] == letter[j])
{
s[i] = num[j];
}
j++;
}
}
return (s);
}
