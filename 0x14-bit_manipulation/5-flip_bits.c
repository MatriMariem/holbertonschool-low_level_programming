#include "holberton.h"

/**
*flip_bits - counts the number of different bits in n and m
*@n: first number
*@m: second number
*Return: number of different bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int count = 0;
unsigned long int c;
c = n ^ m;

while (c)
{

count += c & 1;
c = c >> 1;
}
return (count);
}
