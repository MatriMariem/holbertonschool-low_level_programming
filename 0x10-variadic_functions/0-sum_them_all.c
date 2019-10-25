#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
* sum_them_all - sums all parameters
*@n: first parameter
*Return: sum
*/
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int sum;
va_list ls;
if (n == 0)
{
return (0);
}
va_start(ls, n);
sum = 0;
for (i = 0; i < n; i++)
{
sum += va_arg(ls, const unsigned int);
}
va_end(ls);

return (sum);
}
