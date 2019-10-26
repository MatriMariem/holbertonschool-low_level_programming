#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
*print_strings - print all strings seperated by separator
*@separator: pointer to string separator
*@n: number of strings
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list ls;
char *string;
va_start(ls, n);

for (i = 0; i < n; i++)
{
string = va_arg(ls, char *);
if (string != '\0')
{
printf("%s", string);
}
else if (string == '\0')
{
printf("(nil)");
}
if ((separator != '\0') && (i < (n - 1)))
{
printf("%s", separator);
}
}
printf("\n");
va_end(ls);

}
