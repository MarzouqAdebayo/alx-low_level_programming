#include "main.h"
/**
 * _abs - Contains full body of the function
 * @n: The number which it absolute value is to be returned
 *
 * Description: Returns the absolute value of an integer
 * Return: positive value of an integer
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	n *= -1;
	return (n);
}

