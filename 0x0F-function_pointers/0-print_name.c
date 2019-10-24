#include "function_pointers.h"
/**
*print_name - prints a name
*@name: pointer to string
*@f: pointer to function
*/
void print_name(char *name, void (*f)(char *))
{
if ((*f) == '\0')
{
return;
}
(*f)(name);
}
