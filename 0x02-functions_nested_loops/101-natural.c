#include "holberton.h"
#include <stdio.h>

/**
* main - check the code for Holberton School students.
*
* Return: Always 0.
*/
int main(void)
{
int i, mul3, mul5, sum;
sum = 0;
for (i = 1; i < 1024; i++)
{
mul3 = i * 3;
mul5 = i * 5;
if (mul3 < 1024)
{
sum = sum + mul3;
}
if (mul5 < 1024)
{
sum = sum + mul5;
}
}
printf("%d", sum);
return (0);
}
