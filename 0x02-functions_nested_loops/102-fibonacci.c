#include <stdio.h>
/**
 * main - Entry pointof the program
 * Description: prints the first 50 fibonnacci number
 * Return: 0
 */
int main(void)
{
	int n, i, a, b, c;
	char space = ", ";

	n = 50;
	a = b = 1;
	printf("%d %c %d", a, space, b);
	printf("%c", space)

	for (i = 3; i <= 50; 1++)
	{
		c = a + b;
		printf("%d", c);
		if (i != 50)
			printf("%c", space);
		a = b;
		b = c;
	}
	return (0);
}
