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
		if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", i);
	}
	printf("\n");
	return (0);
}
