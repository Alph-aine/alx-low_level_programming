#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
/**
  * main - Entry point
  *
  * Description:writing a if loop
  * Return: Always 0 (Success)
  */
int main(void)
{	/* declaring the basic variables */
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastDigit = n % 10;

	if (lastDigit == 0)
	{
		printf("Last digit of n is %d and is zero\n", lastDigit);
	}
	else if (lastDigit > 5)
	{
		printf("Last digit of n is %d and is greater than 5\n", lastDigit);
	}
	else
	{
		printf("Last digit of n is %d and is less than 6 and not 0\n", lastDigit);
	}
	return (0);
}
