#include "main.h"

/**
 * set_bit - sets the bit at a particular index
 * @n: number to be checked
 * @index: index of bit to set
 *
 * Return: 1 | 0 | -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num_bits, mask;

	num_bits = sizeof(unsigned int) * 8;
	if (index >= num_bits)
		return (-1);
	mask = 1 << index;

	*n = *n | mask;
	return (1);
}
