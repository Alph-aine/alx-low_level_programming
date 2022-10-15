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
		for (j = '1'; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
