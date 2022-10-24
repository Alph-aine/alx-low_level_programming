#include "main.h"
/**
 *print_rev- prints  a string in reverse
 *@s: the stringr
 *
 * Return: the length of the string
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		s++;
		i++;
	}
	while (i >= 0)
	{
		_putchar(s['i']);
		i--;
	}
	_putchar('\n');
}
