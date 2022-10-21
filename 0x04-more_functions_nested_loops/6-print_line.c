#include "main.h"
/**
 * print_line- prints a straight line
 *@n: the number of times a dash will be printed
 *
 *Description:
 * Return: none
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
			break;
		}
		else
			_putchar('_');
	}
	_putchar('\n');

}
