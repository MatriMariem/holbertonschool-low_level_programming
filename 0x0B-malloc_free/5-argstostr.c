#include <stdlib.h>
#include "holberton.h"
/**
* argstostr - concatenates all the arguments of the program
*@ac: number
*@av: argument value
* Return: pointer to a string
*/
char *argstostr(int ac, char **av)
{
int i, j, len = 0, k = 0;
char *new;
if ((ac == 0) || (av == '\0'))
{
return (0);
}
for (i = 0; i < ac; i++)
{
j = 0;
while (*(av[i] + j) != '\0')
{
j++;
len++;
}
len++;
}
len++;
new = malloc(sizeof(char) * len);
if (new == '\0')
{
return (0);
}
for (i = 0; i < ac; i++)
{
j = 0;
while (*(av[i] + j) != '\0')
{
new[k] = *(av[i] + j);
j++;
k++;
}
new[k] = '\n';
k++;
}
new[k] = '\0';
return (new);
}
