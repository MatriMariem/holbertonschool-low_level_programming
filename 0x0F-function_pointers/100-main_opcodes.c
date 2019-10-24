#include <stdlib.h>
#include <stdio.h>


/**
 * main - prints the opcodes of main function
 * @argc: number of arguments passed to the function
 * @argv: array of pointers to arguments
 *
 * Return: always O
 */

int main(int argc, char *argv[])
{
int nbytes;
char *p = (char *)&main;
int i;

if (argc != 2)
{
printf("Error\n");
exit(1);
}
nbytes = atoi(argv[1]);
if (nbytes < 0)
{
printf("Error\n");
exit(2);
}

for (i = 0; i < nbytes; i++)
{
printf("%.2hhx", p[i]);
if (i <  nbytes - 1)
printf(" ");
}
printf("\n");

return (0);
}
