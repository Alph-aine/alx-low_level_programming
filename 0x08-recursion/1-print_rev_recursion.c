#include "main.h"
/**
 *_print_rev_recursion- printsa string in reverse
 *@s: the string
 *
 *Return: void
 */
void _print_rev_recursion(char *s)
{
	int i, j, k;

	i = j = k = 0;
	while (s[i] != '\0')
		i++;
	k = i;
	while (i >= 0)
	{
		if (j == k)
		{
			_putchar(s[i]);
			return;
		}
		_putchar(s[i]);
		i--;
		j++;
	}
	_print_rev_recursion(s);
}
