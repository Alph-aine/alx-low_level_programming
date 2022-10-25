#include "main.h"
/**
 *puts2- prints every other character of a string
 *@str: the string
 *
 * Return: the length of the string
 */
void puts2(char *str)
{
	int i, j;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	i = i - 1;
	for (j = 0; j < i; j++)
	{
		if (i % 2 == 0)
			_putchar(str[j]);
	}

	_putchar('\n');
}
