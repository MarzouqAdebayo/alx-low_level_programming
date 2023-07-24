#include "main.h"
/**
 * swap_int - Body of the function
 * @a: pointer to integer a
 * @b: pointer to integer b
 *
 * Description: Swaps the values of a and b
 * Return: has no return value
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

