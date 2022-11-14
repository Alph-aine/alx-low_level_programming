#include "main.h"
/**
 * _abs- An absolute number function
 * @i: the parameter / data type of argument
 *
 * Description: It returns the absolute valu of any number
 * Return: 0 (success)
 */
int _abs(int i)
{
	if (i >= 0)
		return (i);
	else
		return (i * -1);
}

