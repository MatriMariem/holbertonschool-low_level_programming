#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
*print_char - use va arg to print the char
*@c: char
*/
void print_char(va_list c)
{
printf("%c", va_arg(c, int));
}

/**
*print_integer - use va arg to print the integer
*@i: int
*/
void print_integer(va_list i)
{
printf("%d", va_arg(i, int));
}
/**
*print_float - use va arg to print float
*@f: float
*/
void print_float(va_list f)
{
printf("%f", va_arg(f, double));
}

/**
*print_string - use va arg to print the string or nil
*@st: string
*/
void print_string(va_list st)
{
char *string = va_arg(st, char *);
if (string == NULL)
{
string = "(nil)";
}
printf("%s", string);
}

/**
*print_all - prints anything
*@format: a pointer to string that contains types of parameters
*/
void print_all(const char * const format, ...)
{
my_str mytypes[] = {
{"c", print_char},
{"i", print_integer},
{"f", print_float},
{"s", print_string},
{NULL, NULL}
};
va_list ls;
unsigned int i = 0, j;
char *separator = "";
va_start(ls, format);
i = 0;
while (format && format[i])
{
j = 0;
while (mytypes[j].letter != NULL)
{
if (format[i] == *(mytypes[j].letter))
{
printf("%s", separator);
mytypes[j].f(ls);
separator = ", ";
break;
}
j++;
}
i++;
}
va_end(ls);
printf("\n");
}
