#include "main.h"
/**
 *is_prime- checks for a prime number
 *@n: the number
 *@divisor: the dividing number
 *
 *Return: 1 or 0
 */
int is_prime(int n, int divisor)
{
	if (n == divisor)
		return (1);
	if (n % divisor == 0)
		return (0);
	return (is_prime(n, divisor + 1));
}

/**
 *is_prime_number- takes the return value
 *from the above function
 *
 *@n: the number entered from main
 *Return: 1 or 0
 */
int is_prime_number(int n)
{
	int divisor = 3;

	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	return (is_prime(n, divisor));
}
