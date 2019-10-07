#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
char *s2 = "this is another string";
char *f2 = "\0";
   
 char *s = "mariem mmatri";
    char *f = "matri";
    char *t;  
 t = _strstr(s, f);
    printf("%s\n", t);

t = _strstr(s2, f2);
printf("%s\n", t);

    return (0);
}
