#include <stdio.h>
/**
* main - Entry point
* print all single digits fron 0 to 10
* Return: Always 0 (Success)
*/
int main(void)
{
int x;
for (x = 0; x <= 9; x++)
{
putchar(x + '0');
if (x != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
