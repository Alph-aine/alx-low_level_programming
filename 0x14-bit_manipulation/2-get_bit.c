#include "main.h"
/**
 *get_bit- returns the bit at an index
 *@n: the number
 *@index: the index
 *Return: -1 or the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int len = 0, bit;
	unsigned long int n_copy = n;

	while (n_copy > 0)
	{
		len++;
		n_copy >>= 1;
	}
	if (index > (unsigned int)len)
		return (-1);
	bit = ((n >> index) & 1);
	return (bit);
}
