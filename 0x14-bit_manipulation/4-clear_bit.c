#include "holberton.h"

/**
*clear_bit - sets the bit at a certain index to 0
*@n: pointer to the number
*@index: our index
*Return: 1 if success, -1 if failure
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 31)
return (-1);

*n = *n & ~(1 << index);

return (1);


}
