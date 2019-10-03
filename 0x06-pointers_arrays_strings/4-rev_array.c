#include "holberton.h"
/**
*reverse_array - reverses an array of integers
*@a: pointer to array
*@n: size of array
*/
void reverse_array(int *a, int n)
{
int i, store;
for (i = 0; i < (n / 2); i++)
{
store = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = store;
}
}
