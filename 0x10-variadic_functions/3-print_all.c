#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
*print_char - use va arg to print the char
*@ls: list of arguments
*/
void print_char(va_list ls)
{
printf("%c", va_arg(ls, int));
}

/**
*print_integer - use va arg to print the integer
*@ls: list of arguments
*/
void print_integer(va_list ls)
{
printf("%d", va_arg(ls, int));
}
/**
*print_float - use va arg to print float
*@ls: list of arguments
*/
void print_float(va_list ls)
{
printf("%f", va_arg(ls, double));
}

/**
*print_string - use va arg to print the string or nil
*@ls: list of arguments
*/
void print_string(va_list ls)
{
char *string;
string = va_arg(ls, char *);
if (string == '\0')
{
printf("(nil)");
return;
}
printf("%s", string);
}


/**
*print_all - prints anything
*@format: a pointer to string that contains types of parameters
*/
void print_all(const char * const format, ...)
{
int i = 0, j;
char *separator = "";
va_list ls;
my_str My_Types[] = {
{'c', print_char},
{'i', print_integer},
{'f', print_float},
{'s', print_string},
{'\0', '\0'}
};
va_start(ls, format);
while (format[i] != '\0' && format != '\0')
{
j = 0;
while (My_Types[j].letter != '\0')
{
if (format[i] == My_Types[j].letter)
{
printf("%s", separator);
My_Types[j].f(ls);
separator = ", ";
}
j++;
}

i++;
}
printf("\n");
va_end(ls);
}
