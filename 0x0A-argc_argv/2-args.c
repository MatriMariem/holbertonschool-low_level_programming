#include <stdio.h>
#include "holberton.h"
/**
* main - prints all arguments, one argument per line
*@argc: int
*@argv: an array of strings
* Return: 0
*/
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
