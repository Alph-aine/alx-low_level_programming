#include "main.h"
/**
 *_print_rev_recursion- printsa string in reverse
 *@s: the string
 *
 *Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		s++;
		_putchar(*s);
	}
}
