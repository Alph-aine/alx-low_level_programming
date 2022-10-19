#include "main.h"
/**
 * print_times_table - For multiplication tables between 0 and 15 included
 * @n: the table to be printed
 *
 * Description: Takes a parameter and prints the multiplication table for it
 * it doesn't print above 15
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, k;

	for (i = 0; i <= n; i++)
	{
		if (n < 0 || n > 15)
			break;
		for (j = 0; j <= n; j++)
		{
			k = j * i;
			if (j == 0)
				_putchar(k + '0');
			if (k < 10 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			}
			else if (k >= 10 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
		}
		_putchar('\n');
	}
}

