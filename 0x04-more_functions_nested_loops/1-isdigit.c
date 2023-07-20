#include "main.h"
/**
 * _isdigit - Body of the function
 * @n: digit decimal value to be checked
 *
 * Description: Checks if a character is a digit or not
 * Return: 1 if n is digit otherwise 0
 */
int _isdigit(int n)
{
	if (n >= 48 && n < 58)
		return (1);
	return (0);
}

