#include "main.h"
/**
 *get_bit- returns the bit at an index
 *@n: the number
 *@index: the index
 *Return: -1 or the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int max_range;
	int bit;

	max_range = (sizeof(unsigned long int) * 8);

	if (index > max_range)
		return (-1);

	bit = ((n >> index) & 1);
	return (bit);
}
