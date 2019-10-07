#include "holberton.h"
/**
*_memcpy - copies n bytes from memory area src to memory area dest
*@dest: pointer to output string
*@src: input string
*@n: number of bytes that will be copied from src
*Return: pointer to a string
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
