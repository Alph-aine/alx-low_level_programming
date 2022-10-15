#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description : prints aphabets in lowercase and upper, uses putchar
 * Return: Always 0 (Success)
 */
int main(void)
{	/* body of code*/
	int n;

	while (n <= '9')
	{
		putchar(n);
		if (n != '9')
		{
		putchar(',');
		putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
