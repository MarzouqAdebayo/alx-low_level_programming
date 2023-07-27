#include "main.h"

/**
 * reverse_array - Reverses an array
 * @a: pointer to the start of the array
 * @n: number of elements of the array
 *
 * Return: no return value
*/
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - 1 - i] = temp;
	}
}
