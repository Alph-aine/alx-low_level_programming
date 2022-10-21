#include <stdio.h>
/**
* print_diagonal- prints a diagonals
*@n: the number of times a \  will be printed
 *
 *Description:
 * Return: none
 */
int main(int n)
{
	int i, j;

	n = 10;
	if (n <= 0)
		putchar('\n');
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			if (i == j)
			{
				putchar('\\');
				putchar('\n');
			}
			else
			{
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);

}
