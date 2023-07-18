#include "main.h"
/**
 * _isalpha - Contains full body of the function
 * @c: The characer to be checked
 *
 * Description: Checks if an alphabet is an alphabet or not
 * Return: 1 if c is and 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
