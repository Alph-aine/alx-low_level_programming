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
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	if (s > '\0')
		_puts_recursion(*s);
}
