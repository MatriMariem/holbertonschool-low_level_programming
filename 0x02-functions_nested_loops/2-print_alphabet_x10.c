#include "holberton.h"

/**
*print_alphabet_x10 - check the code for Holberton School students.
*description print a-z x10
*Return: Always 0.
*/

void print_alphabet_x10(void)
{
int i, j;
j = 0;
while (j <= 10)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
j++;
}
}
