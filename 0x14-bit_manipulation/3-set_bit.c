#include "main.h"
/**
 *set_bit- set the value of the bit at a given index to 1
 *@n: the number
 *@index: th index
 *Return: 1 0r -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max_range; 
	unsigned long int mask = 1;


	max_range = (sizeof(unsigned long int) * 8);
	if (index > max_range)
		return (-1);

	mask <<= index;
	*n = (*n | mask);

	return (1);
}
