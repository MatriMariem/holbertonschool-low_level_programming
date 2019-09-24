#include "holberton.h"

/**
*print_alphabet - check the code for Holberton School students.
*description print a-z
*Return: Always 0.
*/

void print_alphabet(void)
{
int i;

for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
