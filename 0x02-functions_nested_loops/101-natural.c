#include "holberton.h"
#include <stdio.h>

/**
* main - check the code for Holberton School students.
*
* Return: Always 0.
*/
int main(void)
{
int i, sum;
sum = 0;
for (i = 1; i < 1024; i++)
{
if ((i % 3 == 0) || (i % 5 == 0))
{
sum = sum + i;
}
}
printf("%d\n", sum);
return (0);
}
