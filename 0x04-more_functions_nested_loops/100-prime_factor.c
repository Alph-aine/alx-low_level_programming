#include <stdio.h>
#include <math.h>
/**
 * main- prints the largext prime factor of 612852475143.
 *
 *Description:
 * Return: 0 (Success)
 */
int main(void)
{
	int i;
	long int n;

	n = 612852475143;
	while (n % 2 == 0)
	{
		n = n / 2;
	}
	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			n = n / i;
		}
	}
	if (n > 2)
		printf("%ld\n", n);
	return (0);
}
