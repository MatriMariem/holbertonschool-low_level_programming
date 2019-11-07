#include "holberton.h"

/**
*set_bit - sets bit at a specific index to 1
*@n: pointer to number
*@index: our index
*Return: 1 if success, -1 if error
*/
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 31)
return (-1);

*n = *n | 1 << index;
return (1);

}
