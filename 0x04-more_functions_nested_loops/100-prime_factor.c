#include <stdio.h>
#include "holberton.h"
/**
*main - entry point
*Return: 0 if success
*/
int main(void)
{
long i, largest, n = 612852475143;
i = 2;
largest = 0;
while (n != 1)
{
for (i = 2; i <= n; i++)
{
while ((n % i) == 0)
{
n = n / i;
if (largest < i)
{
largest = i;
}
}
}
}
printf("%ld\n", largest);
return (0);
}
