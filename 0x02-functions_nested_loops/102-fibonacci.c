#include "holberton.h"
#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
long int Fi[50];
int i;
Fi[0] = 1;
Fi[1] = 2;
printf("%ld, %ld ,", Fi[0], Fi[1]);
for (i = 2; i <= 49; i++)
{
Fi[i] = Fi[i-1] + Fi[i-2];
if (i != 49)
{
printf("%ld, ", Fi[i]);
}
else
{
printf("%ld", Fi[i]);
}
}
printf("\n");
return (0);
}
