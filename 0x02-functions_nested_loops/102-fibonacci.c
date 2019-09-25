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
Fi[0] = 1;
Fi[1] = 2;
for (i = 2; i <= 49; i++)
{
Fi[i] = Fi[i - 1] + Fi[i - 2];
}
for (i = 0; i <= 49; i++)
{
printf("%ld", Fi[i]);
if (i != 49)
{
printf(", ");
}
}
printf("\n");
return (0);
}
