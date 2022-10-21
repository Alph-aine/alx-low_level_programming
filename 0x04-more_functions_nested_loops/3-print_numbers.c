#include "main.h"
/**
 * print_numbers- printsnumbers from 0-9
 *
 * Description:
 * Return: none
 */
void print_numbers(void)
{
	int i;

	i = 0;
	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
