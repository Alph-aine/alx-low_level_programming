#include "main.h"
/**
 * times_table - prints time table from 0-9
 * Description: uses while loop
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int i, j;

	i = 0;
	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			_putchar(j * i);
			_putchar(',');
			_putchar(' ');
			j++;
		}
		i++;
	}

}
