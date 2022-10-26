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
	signed int m;

	m = n;
	if (n == 0)
		_putchar('0');
	else if (n < 0)
	{
		m *= -1;
		_putchar('-');
		_putchar('0' + m);
	}
	else if (m < 10)
		_putchar(m + '0');
	else if (m >= 10 &&  m < 100)
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
	else if (m >= 1000)
	{
		_putchar((m / 1000) + '0');
		_putchar(((m / 100) % 10) + '0');
		_putchar(((m / 10) % 10) + '0');
		_putchar((m % 10) + '0');
	}
}
