#include "main.h"
/**
 *_puts_recursion- prints as string
 *to the stdout using recursion
 *@s:  the string
 *
 *Return: void
 */
void _puts_recursion(char *s)
{
	int i;

	i = 0;
	_putchar(s[i]);
	if (i > '\0')
		_puts_recursion(s[i]);
}
