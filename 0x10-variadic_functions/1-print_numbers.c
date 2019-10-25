#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
*print_numbers - print all numbers seperated by separator
*@separator: pointer to string
*@n: number of parameters
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list ls;

va_start(ls, n);

for (i = 0; i < n; i++)
{
if ((separator != '\0') && (i < (n - 1)))
{
printf("%d%s", va_arg(ls, int), separator);
}
else
{
printf("%d", va_arg(ls, int));
}
}
printf("\n");
va_end(ls);

}
