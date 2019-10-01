#include "holberton.h"
/**
* rev_string - it reverses a string in r
*@s: pointer to a string
* Return: void
*/
void rev_string(char *s)
{
int j, i = 0;
char x;
while (*(s + i) != '\0')
{
i++;
}
i = i - 1;
for (j = 0; j <= (i / 2); j++)
{
x = *(s + j);
*(s + j) = *(s + (i - j));
*(s + (i - j)) = x;
}
}
