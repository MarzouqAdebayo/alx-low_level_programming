#include "main.h"
/**
 * more_numbers - Body of the function
 *
 * Description: Prints numbers from 0 - 14
 * Return: has no return value
 */
void more_numbers(void)
{
	int line, i;

	for (line = 0; line < 10; line++)
	{
		for (i = 48; i < 50; i++)
		{
			if (i == 49)
				_putchar(49);
			for (j = 48; j < 58; j++)
				if (i == 49 && j > 52)
					break;
				_putchar(j)
		}
		_putchar('\n');
	}
}
