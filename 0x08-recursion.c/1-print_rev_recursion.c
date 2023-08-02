#include "main.h"

/**
 * _print_rev_recursion - prints a string to stdout
 * @s: string to be printed
 *
 * Return: void, has no return value
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
