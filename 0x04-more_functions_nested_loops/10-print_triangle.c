#include "main.h"
/**
 *print_triangle- prints triangle
 *@size: the size of thetriangle
 *
 * Description: takes size and prints a triangl with that size
 * Return: none
 */
void print_triangle(int size)
{
	int i, j;

	if (size == 0)
		_putchar('\n');
	for (i = 1; i <= size; i++)
	{
		for (j = i; j <= size; j++)
		{
			_putchar(' ');
		}
		for (j = 1; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
