#include "main.h"
/**
 * print_alphabet - Prints all alphabets
 *
 * Return: void
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

