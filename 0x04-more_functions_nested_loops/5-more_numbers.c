#include "holberton.h"
/**
*more_numbers - prints from 0 to 9
*
* Return - void
*/
void more_numbers(void)
{
int x, i;
for (i = 1; i <= 10; i++)
{
for (x = 0; x <= 14; x++)
{
if (x > 9)
{
_putchar((x / 10) + '0');
}
_putchar((x % 10) + '0');
}
_putchar('\n');
}
}
