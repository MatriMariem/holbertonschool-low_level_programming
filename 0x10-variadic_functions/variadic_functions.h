#ifndef VARIADIC
#define VARIADIC
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


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct types - pointer to function with corresponding letter
 * @letter: type name
 * @f: print function
 */

void print_char(va_list ls);
void print_integer(va_list ls);
void print_float(va_list ls);
void print_string(va_list ls);
#endif
