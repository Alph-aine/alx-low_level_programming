#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *int_index-searches an array for a match using cmp
  *@array:the array
  *@size:size of th array
  *@cmp:the compare function
  *
  *Return: i, or -1
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	/*int temp;*/

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (; i < size ; i++)
	{
		/*temp = cmp(*(array + i);*/
		if (cmp(*(array + i))
			return (i);
	}
	return (-1);
}
