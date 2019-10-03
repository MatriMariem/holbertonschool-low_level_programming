#include "holberton.h"
/**
*rot13 - converts string to rot13
*@s: pointer to a string
*Return: pointer to char
*/
char *rot13(char *s)
{
int i, j;
char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (i = 0; s[i] != '\0'; i++)
{
j = 0;
while ((alpha[j] != '\0') && (s[i] != alpha[j]))
{
j++;
}
if (s[i] == alpha[j])
{
s[i] = rot[j];
}
}
return (s);
}
