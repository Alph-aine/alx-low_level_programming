#include "variadic_functions.h"
#include  <stdarg.h>
#include <stdio.h>
/**
  *print_numbers-print numbers with a separator
  *@separator: a character (',')
  *@n: the number of arguments
  *
  *Return: none
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, x;
	va_list  args;

	if (separator == NULL)
		return;
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		printf("%d", x);
		if ((i + 1) != n)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
