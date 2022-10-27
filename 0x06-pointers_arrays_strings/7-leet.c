#include "main.h"
/**
 *leet- uses a special conditiion
 * @n: the string
 *
 *Return: string
 */
char *leet(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		for (i >= 'a' || i >= 'A'; i <= 'z' || i <= 'Z'; i++)
		{
			if (i == 'a' || i == 'A')
				_putchar('4');
			else if (i == 'e' || i == 'E')
				_putchar('3');
			else if (i == 'o' || i == 'O')
				_putchar('0');
			else if (i == 't' || i == 'T')
				_putchar('7');
			else if (i == 'l' || i == 'L')
				_putchar('1');
			else
				_putchar(i + '0');
		}
		i++
	}
	return (n);
}
