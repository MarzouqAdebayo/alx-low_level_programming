#include "main.h"
/**
 * print_last_digit - Contains full body of the function
 * @n: The number whose last digit is to be returned
 *
 * Description: A function that returns the last digit of an integer
 * Return: The last digit of integer n
 */
int print_last_digit(int n)
{
	n %= 10;
	if (n >= 0)
	{
		return (n);
	}
	n *= -1;
	return (n);
}
