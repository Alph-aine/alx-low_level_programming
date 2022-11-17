#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h> 
/**
  *array_iterator- iterates a function on the elements of an array
  *@array: the array to be iterated over
  *@size:size of the array
  *@action: the function that takes array as an argument
  *
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if (array != NULL && action != NULL)
		for (; i < (int)size; i++)
		{
			action(array[i]);
		}
}
