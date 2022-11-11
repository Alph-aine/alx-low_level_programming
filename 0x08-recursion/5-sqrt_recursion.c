#include "main.h"
/**
 *find_base- finds the base no that can be multiplied together
 *to get n
 *@n: the number
 *@base: the base no to be multipllied
 *
 *Return: base
 */
int find_base(int n, int base)
{
	if (base * base > n)
		return (-1);
	if (base * base == n)
		return (base);
	return (find_base(n, base + 1));
}

/**
 *_sqrt_recursion- finds the sqrt of numbers with
 *natural sqrts
 *@n: the number entered
 *
 *Return: returns (-1, 0, 1) for (n < 0, n == 0, n == 1)
 *returns base for other valid numbers
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	return (find_base(n, 0));
}
