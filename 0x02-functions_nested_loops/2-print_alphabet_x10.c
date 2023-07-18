#include "main.h"
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i = 0, count = 97;

	for (i = 0; i < 10; i++)
	{
		while (count < 97 + 26)
		{
			_putchar(count);
			count++;
		}
		_putchar(10);
		count = 97;
	}
}

