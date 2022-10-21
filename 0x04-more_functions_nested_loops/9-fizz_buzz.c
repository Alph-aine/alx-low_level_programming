#include <stdio.h>
/**
 * main - Runs the programm
 *
 * Description: Prints numbers from 1 -100
 * if number is a multiple of 3 prints 'Fizz'
 * if number is a multiple of 5 prints 'Buzz'
 * if number is a multiple of both prints 'FizzBuzz'
 *Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
			printf(" ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
			printf(" ");
		}
		else
		{
			printf("%d", i);
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
