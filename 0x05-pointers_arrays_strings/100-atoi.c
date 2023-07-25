#include "main.h"
/**
 * _atoi - Body of the function
 * @s: The character to be parsed
 *
 * Description: converts strings into int
 * Return: has no return value
 */

int _atoi(char *s)
{
	int i, result = 0, sign = 1;

	while (*(s + i) < '0' || *(s + i) > '9')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}

	while (*(s + i) >= '0' && *(s + i) <= '9')
	{
		result = (result * 10) + (s[i] - 48);
		i++;
	}

	i = 0;

	return (result * sign);
}
