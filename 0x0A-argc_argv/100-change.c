#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
/**
* main - adds positive numbers
*@argc: int
*@argv: an array of strings
* Return: 0
*/
int main(int argc, char **argv)
{
int cents, count;
count = 0;
if (argc != 2)
{
printf("Error\n");
return (1);
}
cents = atoi(argv[1]);
if (cents <= 0)
{
printf("%d", 0);
return (0);
}
else
{
count += cents / 25;
cents %= 25;
count += (cents / 10);
cents %= 10;
count += (cents / 5);
cents %= 5;
count += (cents / 2);
cents %= 2;
count += cents;
printf("%d\n", count);
}
return (0);
}
