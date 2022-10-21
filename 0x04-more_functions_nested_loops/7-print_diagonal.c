#include "main.h"
/**
* print_diagonal- prints a diagonals
*@n: the number of times a \  will be printed
 *
 *Description:
 * Return: none
 */
void print_diagonal(int n)
{
	int i;
	char s;

	s = ' ';
	for (i = 1; i <= n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
			break;
		}
		else
		{
			_putchar(s);
			_putchar('\\');
			s += ' ';
		}
	}
	_putchar('\n');

}
