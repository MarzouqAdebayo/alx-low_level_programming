#include "main.h"
/**
 * _islower - Contains full body of the function
 * @c: The characer to be checked
 *
 * Description: Checks if an alphabet is a lowercase character or not
 * Return: 1 if c is lowercase, 0 if c is not lowercase
 */
int _islower(int c)
{
	if (c >= 97 && c < 97 + 26)
	{
		return (1);
	}
	return (0);
}
