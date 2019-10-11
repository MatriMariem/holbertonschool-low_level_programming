#include "holberton.h"
/**
*_strncat - concatenates 2 strings but according to n
*@dest: pointer to the first string
*@src: pointer to the second string
*@n: number of taken elements from second string
*Return: pointer to char
*/
char *_strncat(char *dest, char *src, int n)
{
int i, j;
i = 0;
while (dest[i] != '\0')
{
i++;
}
j = 0;
while ((j < n) && (src[j] != '\0'))
{
dest[i] = src[j];
j++;
i++;
}
if (n != 0)
{
dest[i] = '\0';
}
return (dest);
}
