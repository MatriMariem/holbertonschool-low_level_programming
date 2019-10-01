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
for (i = 0; i < (n - 1); i++)
{
printf("%d, ", *(a + i));
}
printf("%d", *(a + (n - 1)));
printf("\n");
}
