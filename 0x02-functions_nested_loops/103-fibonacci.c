#include "holberton.h"
#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
long Fi[50];
int i;
long sum;
Fi[0] = 1;
Fi[1] = 2;
for (i = 2; i <= 49; i++)
{
Fi[i] = Fi[i - 1] + Fi[i - 2];
}
sum = 0;
for (i = 0; i <= 49; i++)
{
if ((Fi[i] <= 4000000) && ((Fi[i] % 2) == 0))
{
sum = sum + Fi[i];
}
}
printf("%ld\n", sum);
return (0);
}
