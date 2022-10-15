#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description : prints  all possible combinations of single-digit numbers, with
 * some conditions though.
 * Return: Always 0 (Success)
 */
int main(void)
{	/* body of code*/
	int n;

	n = '0';
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
