#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Contains full body of the function
 * @n: The argument to print to 98 from
 *
 * Description: Prints all natural numbers from n to 98
 * Return: returns all natural numbers from n to 98
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			n++;
		}
	} else
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			n--;
		}
	}
	putchar('\n');
}

