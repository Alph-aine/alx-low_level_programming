#include "main.h"
/**
 *puts2v- prints every other character of a string
 *@str: the string
 *
 * Return: the length of the string
 */
void puts2(char *str);
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		if (i % 2 == 0)
			_putchar(s[i]);
	}

	_putchar('\n');
}
