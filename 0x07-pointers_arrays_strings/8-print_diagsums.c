#include "holberton.h"
#include <stdio.h>
/**
*print_diagsums - prints sums of diags
*@a: pointer to 2d array
*@size: size of the array
*/
void print_diagsums(int *a, int size)
{
int i, sum1, sum2;
sum1 = 0;
sum2 = 0;
for (i = 0; i < size; i++)
{
sum1 = sum1 + *(a + (i + i * size));
sum2 = sum2 + *(a + ((i + 1) * (size - 1)));
}
printf("%d, %d\n", sum1, sum2);
}
