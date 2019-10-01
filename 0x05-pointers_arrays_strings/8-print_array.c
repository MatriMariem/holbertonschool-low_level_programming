#include "holberton.h"
#include <stdio.h>
/**
* print_array - it prints an array
*@a: an array
*@n: is the length of array
* Return: void
*/
void print_array(int *a, int n)
{
int i;
for (i = 1; i < n; i++)
{
printf("%d, ", *(a + i - 1));
}
printf("%d", *(a + i - 1));
printf("\n");
}
