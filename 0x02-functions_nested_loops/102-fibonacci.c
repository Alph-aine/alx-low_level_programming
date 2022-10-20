#include <stdio.h>
/**
 * main - Entry pointof the program
 * Description: prints the first 50 fibonnacci number
 * Return: 0
 */
int main(void)
{
	int i, a, b, c;

	a = b = 1;
	printf("%d", a);
	printf(",");
	printf(" ");

	for (i = 2; i <= 50; i++)
	{
		c = a + b;
		printf("%d", c);
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
