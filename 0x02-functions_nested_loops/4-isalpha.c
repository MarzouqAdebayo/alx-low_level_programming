#include "main.h"
/**
 * _isalpha - Contains full body of the function
 * @c: The characer to be checked
 *
 * Description: Checks if c is an alphabet
 * Return: 1 if c is an alphabet, 0 if c is not an alphabet
 */
int _isalpha(int c)
{
	if ((c >= 97 && c < 97 + 26) || (c >= 65 && c < 65 + 26))
	{
		return (1);
	}
	return (0);
}
