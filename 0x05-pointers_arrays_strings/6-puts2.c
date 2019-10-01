#include "holberton.h"
/**
* puts2 - it reverses a string in r
*@str: pointer to a string
* Return: void
*/
void puts2(char *str)
{
int j, i = 0;
while (*(str + i) != '\0')
{
i++;
}
i = i - 1;
for (j = 0; j <= i; j += 2)
{
_putchar(*(str + j));
}
_putchar('\n');
}
