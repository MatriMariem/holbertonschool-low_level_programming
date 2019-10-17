#include <stdlib.h>
#include "holberton.h"
/**
* _calloc - allocates a memory for an array
*@nmemb: number of elements
*@size: size of each element
*Return: void pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *arr;
if ((nmemb == 0) || (size == 0))
{
return (0);
}
arr = malloc(nmemb * size);
if (arr == '\0')
{
return (0);
}
_memset(arr, 0, (nmemb * size));
return (arr);
}
/**
 *_memset - sets first n bytes of s to b
 * @s: array
 * @b: our char
 * @n: first n bytes
 * Return: pointer to string
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
