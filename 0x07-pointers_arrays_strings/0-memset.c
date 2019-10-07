#include "holberton.h"
/**
*_memset - fills the first n bytes of the memory area pointed to by
* s with constant byte b
*@s: pointer to char
*@b: char that will be put in *s
*@n: number of bytes that will have b in
*Return: pointer to a string
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
