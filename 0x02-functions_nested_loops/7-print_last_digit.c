#include "main.h"
/**
 * print_last_digit- prints last digits of any number
 * @n: the number / parameter /argument
 *
 * Description: prints the last digit of any number using the "%" operator
 * Return: returns the ;ast digit
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -(n % 10);
		_putchar(n + '0');
		return (n % 10);
	}
	else
	{
		_putchar('0' + (n % 10));
		return (n % 10);
	}
}
