#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
*get_op_func - selects the correct function for the passed operator
*@s: operator
*Return: pointer to function of type: int f(int, int)
*/
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i = 0;
while (ops[i].op != '\0')
{
if (s[0] == ops[i].op[0])
{
return (ops[i].f);
}
i++;
}
return (0);
}
