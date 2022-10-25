#include "main.h"
/**
 *puts2- prints every other character of a string
 *@str: the string
 *
 * Return: the length of the string
 */
void puts2(char *str)
{
	int i, j, len;
	char temp;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	len = i;
	for (j = 0; j < len; j++)
	{
		if (j % 2 == 0)
		{
			temp = str[j];
			_putchar(temp);
		}
	}

	_putchar('\n');
}
