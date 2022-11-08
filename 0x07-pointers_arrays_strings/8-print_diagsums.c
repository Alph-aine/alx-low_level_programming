#include <stdio.h>
/**
 *print_diagsums- sums the diagonals of a matrix
 *@a: the matrix
 *@size: the size of the matrix
 *
 *Return: none
 */
void print_diagsums(int *a, int size)
{
	int row, i;
	int diagonal_sum = 0;

	for (row = 0; row < size; row++)
	{
		i = (row * size) + row;
		diagonal_sum += a[i];
	}
	printf("%d\n", diagonal_sum);
}
