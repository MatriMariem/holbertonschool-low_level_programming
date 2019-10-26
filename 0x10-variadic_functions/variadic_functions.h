#ifndef _VARIADIC_FUNCTION_H_
#define _VARIADIC_FUNCTION_H_

#include <stdarg.h>

/**
 * struct types - pointer to function with corresponding letter
 * @letter: type name
 * @f: print function
 */
typedef struct types
{
char *letter;
void (*f)(va_list);
} my_str;


int _putchar(char);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
