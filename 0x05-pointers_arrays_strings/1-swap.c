#include "holberton.h"
/**
* swap_int - swaps the values of 2 integers
*@a: pointer to an int variable
*@b: pointer to an int variable
*/
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
