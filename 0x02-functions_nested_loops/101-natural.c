#include <stdio.h>
/**
 * main - the only function of the code
 *
 * Description: the code prints the sum of the multiples of 3 & 5 below 1024
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, i, sum;

	n = 1024;
	i = 0;
	for (i = 0; i < n; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
			printf("The sum of the multiples of 3 and 5 below 1024
					is %d\n", sum);
		}
	}
	return (0);

}
