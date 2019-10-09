#include "holberton.h"
/**
* is_prime_number - checks if a number is prime or not
*@n: int
*Return: 1 if prime and 0 otherwise
*/
int is_prime_number(int n)
{
return (iprime(2, n));
}
/**
* iprime - checks if a number is prime or not
*@i: int
*@n: int
*Return: 1 if prime and 0 otherwise
*/
int iprime(int i, int n)
{
if ((n <= 1))
{
return (0);
}
else if (i > n)
{
return (1);
}
if (((n % i) == 0) && (n != i))
{
return (0);
}
else
{
return (iprime(i + 1, n));
}
}

