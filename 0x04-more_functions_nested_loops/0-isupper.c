#include "main.h"
/**
 * _isupper - Body of the function
 * @c: character decimal value to be checked
 *
 * Description: Checks if a character is uppercase of not
 * Return: 1 if c is uppercase otherwise 0
 */
int _isupper(int c)
{
	if (c >= 65 && c < 65 + 26)
		return (1);
	return (0);
}

