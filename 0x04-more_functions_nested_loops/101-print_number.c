#include "main.h"
/**
 * print_number- prints a given number
 *@n: the given number
 *
 *Description:
 *Return: none
 */
void print_number(int n)
{
	unsigned int m;

	if (n < 0)
	{
		m = -n;
		_putchar('-');
	}
	else
		m = n;
	if (m < 10)
		_putchar(m + '0');
	else if (m >= 100 && m < 100)
	{
		_putchar((m / 10) + '0');
		_putchar((m % 10) + '0');
	}
	else if (m >= 100 && m < 1000)
	{
		_putchar((m / 100) + '0');
		_putchar(((m / 10) % 10) + '0');
		_putchar((m % 10) + '0');
	}
	_putchar('\n');
}
