#include <stdlib.h>
#include "holberton.h"
/**
* malloc_checked - allocates a memory using malloc
*@b: unsigned int
*Return: void pointer
*/
void *malloc_checked(unsigned int b)
{
void *p;
p = malloc(b);
if (p == '\0')
{
exit(98);
}
return (p);
}
