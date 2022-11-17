#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *int_index-
  *@array:
  *@size:
  *@cmp:
  *
  *Return:
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	int temp;

	if (size <= 0)
		return (-1);

	for (; i < size ; i++)
	{
		temp = cmp(array[i]);
		if (temp != 0)
			return (-1);
	}
}
