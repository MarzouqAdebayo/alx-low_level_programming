#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string whose length is to be returned
 * @n: counter for the length of the string
 *
 * Return: int, length of the string
 */
int _strlen(char *s, int n)
{
	if (*s == '\0')
		return n;
	_strlen((s + 1), (n + 1));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string whose length is to be returned
 *
 * Return: int, length of the string
 */

int _strlen_recursion(char *s)
{
	int n = 0;

	return (_strlen(s, n));
}
