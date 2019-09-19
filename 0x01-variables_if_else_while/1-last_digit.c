#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main -Entry point
* give last digit of a random number
* Return: Always 0 (Success)
*/
int main(void)
{
	int n, Last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
Last_digit = n % 10;
if (Last_digit > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, Last_digit);
else if (Last_digit == 0)
printf("Last digit of %d is %d and is 0\n", n, Last_digit);
else
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, Last_digit);
	return (0);
}
