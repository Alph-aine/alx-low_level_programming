#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

/**
  *struct sp- a struct for format specifiers in 3-print_all
  *@fs: the format specifier
  *@func: the function to call for different specifiers
  */
typedef struct sp
{
	char fs;
	void (*func)(va_list);
} specifier;

#endif
