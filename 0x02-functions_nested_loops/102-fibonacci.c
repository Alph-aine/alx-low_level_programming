#include <stdio.h>
/**
 * main - Entry pointof the program
 * Description: prints the first 50 fibonnacci number
 * Return: 0
 */
int main(void)
{
	int i, a, b, c;

	n = 50;
	a = b = 1;
	printf("%d %s %s  %d", a, ",", " ", b);
	printf(",");
	printf(" ");

	for (i = 3; i <= 50; i++)
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
