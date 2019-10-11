#include "holberton.h"
/**
* _strcpy - it copies a string...
*@dest: pointer to a buffer
*@src: pointer to a string
* Return: pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
int j, i = 0;
while (*(src + i) != '\0')
{
i++;
}
for (j = 0; j <= i; j++)
{
*(dest + j) = *(src + j);
}
return (dest);
}
