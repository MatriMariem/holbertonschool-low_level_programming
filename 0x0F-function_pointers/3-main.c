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
if (argc != 4)
{
printf("Error\n");
exit(98);
}
if (get_op_func(argv[2]) == 0)
{
printf("Error\n");
exit(99);
}
n1 = atoi(argv[1]);
n2 = atoi(argv[3]);
printf("%d\n", (*get_op_func)(argv[2])(n1, n2));
return (0);
}
