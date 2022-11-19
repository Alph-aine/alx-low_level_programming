#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  *print_char- function to print char
  *@args: the va_list variable
  */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
  *print_integer- function to print integers
  *@args: the va_list variable
  */
void print_integer(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
  *print_float- prints floats
  *@args: va_list variable
  */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
  *print_string- prints strings
  *@args: args
  */
void print_string(va_list args)
{
	char *s;

	s = va_arg(args, char *);
	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
  *print_all- prints a string, an integer, a float, or
  *a character depending on the format specified
  *@format: determines the type of input and what it prints
  */
void print_all(const char * const format, ...)
{
	char *separator = "";
	int i = 0, j;
	va_list args;

	specifier choice[] = { {'c', print_char},
			       {'s', print_string},
			       {'i', print_integer},
			       {'f', print_float},
			       {'\0', NULL} };
	va_start(args, format);
	while (format != NULL && format[i] == '\0')
	{
		j = 0;
		while (choice[j].fs != '\0')
		{
			if (choice[j].fs == format[i])
			{
				printf("%s", separator);
				choice[j].func(args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
