#include "main.h"
/**
 * more_numbers- printsnumbers from 0-14 ten times
 *
 * Description:
 * Return: none
 */
void more_numbers(void)
{
	int i, j;

	i = 0;
	j = 0;
	while (j <= 10)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
		j++;
	}
}
