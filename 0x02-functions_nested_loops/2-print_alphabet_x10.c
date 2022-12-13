#include "main.h"

/**
 * print_alphabet_x10 - Contains full body of the function
 *
 * Description: Print all alphabets in lowercase on 10 lines
 * Return: void, has no value
 */
void print_alphabet_x10(void)
{
	int line, ch;

	for (line = 0; line < 10; line++)
	{
		for (ch = 97; ch < 97 + 26; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
