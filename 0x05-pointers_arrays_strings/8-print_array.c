#include "main.h"
#include <stdio.h>
/**
 * print_array - Body of the function
 * @a: Pointer to the start of the array
 * @n: The number of elements to be printed
 *
 * Description: Prints n number of elements to stdout
 * Return: has no return value
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
		i++;
	}
}
