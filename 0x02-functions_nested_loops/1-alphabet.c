#include "main.h"
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int count = 97;

	while (count < 97 + 26)
	{
		_putchar(count);
		count++;
	}
	_putchar(10);
}

