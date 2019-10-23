#include <stdlib.h>
#include "function_pointers.h"
/**
*array_iterator - executes a given function on an array
*@array: pointer to array of integers
*@size: size of array
*@action: pointer to function
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array == '\0' || action == '\0')
{
return;
}
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
