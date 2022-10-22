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
		_putchar(m + '0');
	}
	if (n < 10)
		_putchar(n + '0');
	else if (n >= 100 && n < 100)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n >= 100 && n < 1000)
	{
		_putchar((n / 100) + '0');
		_putchar(((n / 10) % 10) + '0');
		_putchar((n % 10) + '0');
	}
	_putchar('\n');
}
