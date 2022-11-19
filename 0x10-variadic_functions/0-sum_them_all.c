#include "variadic_functions.h"
#include <stdarg.h>
/**
 *sum_them_all- takes an unfixed number of arguments and sum them
 *@n: the number of arguments
 *
 *Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int x;
	int sum = 0;
	va_list args; /*args gives access to the argumnets*/

	if (n == 0)
		return (0);

	va_start(args, n);

	for (; i < n; i++)
	{
		x = va_arg(args, int);
		sum += x;
	}
	va_end(args);
	return (sum);
}
