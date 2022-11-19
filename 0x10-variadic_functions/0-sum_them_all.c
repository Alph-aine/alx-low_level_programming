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
	int i = 0;

	if (n == 0)
		return (0);

	va_list args; /*args gives access to the argumnets*/

	va_start(args, n);

	for (; i < n; i++)
	{
		int x;
		int sum = 0;

		x = va_arg(args, int);
		sum += x;
	}
	va_end(args);
	return (sum);
}
