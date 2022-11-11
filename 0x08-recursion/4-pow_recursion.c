#include "main.h"
/**
 *_pow_recursion- returns the power of x to y
 *@x: base number
 *@y: power to be raise to
 *
 *Return: power of x to y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 2)
		return (x * x);
	return (x * _pow_recursion(x, y - 1));
}
