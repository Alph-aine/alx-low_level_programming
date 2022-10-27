#include "main.h"
/**
 *reverse_array- reverses an array
 *@a: the array
 *@n: number of elements in th array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int length, i, last_pos;
	char temp;

	i = 0;
	length = sizeof(a) / sizeof(a[0]);
	n = length;
	last_pos = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[last_pos - i];
		a[last_pos - i] = temp;
	}
}
