#include "main.h"
/**
 *puts_half- prints every other character of a string
 *@str: the string
 *
 * Return: the length of the string
 */
void puts_half(char *str)
{
	int i, j, k, len;
	char temp;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	len = i  / 2;

		for (j = 0; j < i; j++)
		{
			if (j > len)
			{
				temp = str[j];
				k++;
				_putchar(temp);
			}
		}
		/*if (k % 2 != 0)*/
		/*{*/
/*		}*/
		/*n = (i - 1) / 2; */
		_putchar('\n');

}
