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
	_putchar(s);
	s + 1;
	if (s > '\0')
		_puts_recursion(s);
}
