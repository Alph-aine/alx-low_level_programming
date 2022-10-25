#include "main.h"
/**
 *puts_half- prints every other character of a string
 *@str: the string
 *
 * Return: the length of the string
 */
void puts_half(char *str)
{
	int i, j, k, len, n;
	char temp;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	len = i  / 2;
	n = (i - 1) / 2;

		for (j = 0; j < i; j++)
		{
			if (j > len)
			{
				if (i % 2 != 0)
				{
					for (k = 0; k < n; k++)
					{
						temp = str[k];
						_putchar(temp);
					}
				}
				else
				{
					temp = str[j];
					_putchar(temp);
				}
			}
		}
		_putchar('\n');
}
