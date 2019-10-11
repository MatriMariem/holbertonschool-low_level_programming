#include <stdio.h>
#include "holberton.h"
/**
* main - print the number of arguments passed into the program
*@argc: int
*@argv: an array of strings
* Return: 0
*/
int main(int argc, char *argv[])
{
(void) argv;
printf("%d\n", (argc - 1));
return (0);
}
