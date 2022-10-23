#include <stdio.h>
/**
 * main - Entry pointof the program
 * Description: prints the first 50 fibonnacci number
 * Return: 0
 */
int main(void)
{
	unsigned long int i, a, b, c;

	a = 0;
	b = 1;
	for (i = 1; i <= 98; i++)
	{
		c = a + b;
		printf("%lu", c);
		if (i != 50)
		{
			printf(",");
			printf(" ");
		}
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
