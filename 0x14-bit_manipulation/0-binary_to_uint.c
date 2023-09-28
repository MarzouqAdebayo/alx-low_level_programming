#include "main.h"

/**
 * binary_to_uint - Converts a binary number to decimal
 * @b: Binary number string
 *
 * Return: The decimal value of the number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, sum = 0, len = 0;

	if (!b)
		return (0);

	while (b[len])
		len++;
	len--;
	for (i = 0; b[i]; i++, len--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
		{
			sum += 1 << len;
		}
	}
	return (sum);
}
