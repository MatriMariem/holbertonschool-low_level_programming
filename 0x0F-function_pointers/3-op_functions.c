#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
* op_add - adds 2 numbers
*@a: first number
*@b: second number
*Return: int
*/
int op_add(int a, int b)
{
return (a + b);
}

/**
* op_sub - returns the difference of 2 numbers
*@a: first number
*@b: second number
*Return: int
*/
int op_sub(int a, int b)
{
return (a - b);
}

/**
* op_mul - multiplies 2 numbers
*@a: first number
*@b: second number
*Return: int
*/
int op_mul(int a, int b)
{
return (a * b);
}

/**
* op_div - return division of 2 numbers
*@a: first number
*@b: second number
*Return: int
*/
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
* op_mod - returns remainder of division of 2 numbers
*@a: first number
*@b: second number
*Return: int
*/
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
