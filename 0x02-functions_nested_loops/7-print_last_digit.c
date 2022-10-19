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
		n *= -1;
	else if (n == INT_MIN)
	{
		n = -(n % 10);
		_putchar(n + '0');
	}
	_putchar('0' + (n % 10));
	return (n % 10);
}
