#include <stdio.h>
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = get_bit(1024, 10);
    printf("%d\n", n);
    n = get_bit(98, 1);
    printf("%d\n", n);
    n = get_bit(1024, 0);
    printf("%d\n", n);
 n = get_bit(1024, 11);
    printf("%d\n", n);
 n = get_bit(1, 0);
    printf("%d\n", n);
 n = get_bit(0, 1);
    printf("%d\n", n);
 n = get_bit(98, 31);
    printf("%d\n", n);
 n = get_bit(98, 35);
    printf("%d\n", n);
 n = get_bit(7, 2);
    printf("%d\n", n);

    return (0);
}
