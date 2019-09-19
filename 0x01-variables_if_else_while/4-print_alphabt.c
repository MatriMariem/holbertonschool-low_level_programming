#include <stdio.h>
/**
* main - Entry point
* print all lowercase alphabets except q and e
* Return: Always 0 (Success)
*/
int main(void)
{
char x;
for (x = 'a'; x <= 'z'; x++)
{
if (x != 'e' && x != 'q')
{
putchar(x);
}
}
putchar('\n');
return (0);
}
