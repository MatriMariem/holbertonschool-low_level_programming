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
unsigned int i;
int *arr;
if ((nmemb <= 0) || (size <= 0))
{
return (0);
}
arr = malloc(nmemb * size);
if (arr == '\0')
{
return (0);
}
for (i = 0; i < (nmemb * size); i++)
{
arr[i] = 0;
}
return (arr);
}
