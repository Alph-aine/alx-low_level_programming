#include "main.h"
/**
 * print_most_numbers - prints numbers  0-9 without 2 &4
 * Description:
 * Return: none
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
			_putchar(i + '0');

	}
	_putchar('\n');

}
