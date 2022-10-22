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
	if (n == 0)
		_putchar('0');
	else if (n < 0)
	{
		n = n * -1;
		_putchar('-');
		_putchar(n + '0');
	}
	else if (n < 10)
		_putchar(n + '0');
	else if (n >= 10 &&  n < 100)
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
}
