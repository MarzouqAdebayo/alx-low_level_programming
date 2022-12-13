#include "main.h"
/**
 * print_alphabet - Contains full body of the function
 *
 * Description: Print all alphabets in lowercase
 * Return: void, has no value
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i < 97 + 26; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
