#include "main.h"
/**
 * print_sign - A function to be linked with a main function in another file
 * @n: the parameter of the function
 *
 * Description: returns a specified result based on the type of integer
 * Return: 1 0r 0 0r -1
 */
int print_sign(int n)
{
	if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	else if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else
	{
		return (-1);
		_putchar('-');
	}
}
