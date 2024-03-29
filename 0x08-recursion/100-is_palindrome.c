#include "main.h"

/**
 * _strlen - checks for the length of the string s
 * @s: pointer to the string s
 * @i: integer counter
 *
 * Return: int i, length of the string
*/

int _strlen(char *s, int i)
{
	if (s[i] == '\0')
		return (i);
	return (_strlen(s, (i + 1)));
}

/**
 * checker - checks recursively
 * @s: pointer to the string
 * @l: the index of the first letter
 * @r: the index of the last letter
 *
 * Return: 1 if palindrome and 0 otherwise
 */

int checker(char *s, int l, int r)
{
	if (l >= r)
		return (1);
	if (s[l] == s[r])
		return (checker(s, l + 1, r - 1));
	else
		return (0);
}

/**
 * is_palindrome - states if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int len;

	len = _strlen(s, 0);
	return (checker(s, 0, len - 1));
}
