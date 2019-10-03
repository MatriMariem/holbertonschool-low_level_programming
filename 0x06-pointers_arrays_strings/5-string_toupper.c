#include "holberton.h"
/**
*string_toupper - changes lowercase to uppercase
*@st: string
*Return: pointer to char
*/
char *string_toupper(char *st)
{
int i;
for (i = 0; st[i] != '\0'; i++)
{
if ((st[i] >= 'a') && (st[i] <= 'z'))
{
st[i] = st[i] - 32;
}
}
return (st);
}
