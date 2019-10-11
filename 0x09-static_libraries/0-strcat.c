#include "holberton.h"
/**
*_strcat - concatenates 2 strings
*@dest: pointer to the first string
*@src: pointer to the second string
*Return: pointer to char
*/
char *_strcat(char *dest, char *src)
{
int i, j;
i = 0;
while (dest[i] != '\0')
{
i++;
}
j = 0;
while (src[j] != '\0')
{
dest[i] = src[j];
j++;
i++;
}
dest[i] = src[j];
return (dest);
}
