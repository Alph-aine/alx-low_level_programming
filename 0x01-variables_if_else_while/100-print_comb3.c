#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description : prints aphabets in lowercase and upper, uses putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for  (i = '0'; i < '9'; i++)
	{
		for (j = (i + 1); j <= '9'; j++)
		{
			putchar(i);
			putchar(j);
			if (i != '8' || j != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
