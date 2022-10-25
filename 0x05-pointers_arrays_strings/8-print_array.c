#include <stdio.h>
#include "main.h"
/**
 *print_array- prints an array with a specified length
 *@a:the  array
 *@n: the length to be printed
 *
 *Return: none
 */
void print_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		j = a[i];
		printf("%d, ", j);
	}
	printf("\n");
}
