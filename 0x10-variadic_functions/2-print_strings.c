#include "variadic_functions.h"
#include  <stdarg.h>
#include <stdio.h>
/**
  *print_strings-print strings with  separator
  *@separator: the separator
  *@n: the number of arguments
  *
  *Return: none
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *x;
	va_list  args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, char*);
		if (x == NULL)
		{
			printf("(nil)");
			if (separator != NULL)
			{
				if ((i + 1) != n)
					printf("%s", separator);
			}
		}
		else
		{
			printf("%s", x);
			if (separator != NULL)
			{
				if ((i + 1) != n)
					printf("%s", separator);
			}
		}
	}
	va_end(args);
	printf("\n");
}
