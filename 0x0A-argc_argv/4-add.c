#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
/**
* main - adds positive numbers
*@argc: int
*@argv: an array of strings
* Return: 0
*/
int main(int argc, char *argv[])
{
int i, sum = 0;

if (argc == 1)
{
printf("%d\n", 0);
}
else
{
for (i = 1; i < argc; i++)
{
if (string_isdigit(argv[i]))
{
sum = sum + atoi(argv[i]);
}
else
{
printf("Error\n");
return (1);
}
}
printf("%d\n", sum);
}
return (0);
}
/**
*string_isdigit - checks if c is digit or not
*@s: is a pointer to a string
* Return: 1 if all string is digits, 0 if not
*/
int string_isdigit(char *s)
{
int i, t = 1;
for (i = 0; s[i] != '\0'; i++)
{
if (!((s[i] >= 48) && (s[i] <= 57)))
{
t = t * 0;
}
}
return (t);
}
