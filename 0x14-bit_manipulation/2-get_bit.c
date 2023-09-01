#include "main.h"

/**
 * get_bit - gets the bit at a particular index
 * @n: number to be checked
 * @index: index of bit ot be checked
 *
 * Return: 1 | 0 | -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int num_bits;

	num_bits = sizeof(unsigned int) * 8;
	if (index < 0 || index >= num_bits)
		return (-1);
	unsigned long int mask = 1 << index;

	return (n & mask ? 1 : 0);
}
