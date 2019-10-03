#include "holberton.h"
/**
*_strncpy - copies the second string into the first but according to n
*@dest: pointer to the first string
*@src: pointer to the second string
*@n: number of taken elements from second string
*Return: pointer to char
*/
char *_strncpy(char *dest, char *src, int n)
{
int j = 0;
while ((j < n) && (src[j] != '\0'))
{
dest[j] = src[j];
j++;
}
while (j < n)
{
dest[j] = '\0';
j++;
}
return (dest);
}
