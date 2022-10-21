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
		for (j = 0; j <= i; j++)
		{
			if (i != j)
			{
				while (i < size)
				{
					_putchar(' ');
					i++;
				}
			}
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
