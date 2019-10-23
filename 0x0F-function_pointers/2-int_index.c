#include <stdlib.h>
#include "function_pointers.h"
/**
*int_index - searches for an integer in an array and returns its index
*@array: pointer to array of integers
*@size: size of array
*@cmp: compares values
*Return: index of the integer in the array
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0 || array == '\0' || cmp == '\0')
{
return (-1);
}
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
return (i);
}
}
return (-1);
}
