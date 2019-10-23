#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
/**
* main - Entry point
*@argc: number of arguments
*@argv: arguments
*Return: int
*/
int main(int argc, char *argv[])
{
int n1, n2;
int (*o)(int, int);
if (argc != 4)
{
printf("Error\n");
exit(98);
}
o = get_op_func(argv[2]);
if (o == NULL)
{
printf("Error\n");
exit(99);
}
if (argv[2][1] != '\0')
{
printf("Error\n");
exit(99);
}
n1 = atoi(argv[1]);
n2 = atoi(argv[3]);
printf("%d\n", o(n1, n2));
return (0);
}
