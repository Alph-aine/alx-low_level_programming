#include "main.h"
/**
  *clear_bit- sets the  bit at an index to 0
  *@n: te number
  *@index: the index within the binary number
  *Return: 1 or -1
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max_range;
	unsigned long int mask = 1;

	max_range = (sizeof(unsigned long int) * 8);

	if (index > max_range)
		return (-1);
	mask = ~(mask << index);
	*n = (*n & mask);

	return (1);
}
