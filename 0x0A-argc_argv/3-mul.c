#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
/**
* main - prints the result of multiplication of 2 numbers
*@argc: int
*@argv: an array of strings
* Return: 0
*/
int main(int argc, char *argv[])
{
int mul;
if (argc == 3)
{
mul = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", mul);
}
else
{
printf("Error\n");
}
return (0);
}
