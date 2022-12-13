#include "main.h"
/**
 * jack_bauer - Contains full body of the function
 *
 * Description: Print all the minutes in 24 hours Jack Bauer style
 * Return: void, has no return value
 */
void jack_bauer(void)
{
	for (int i = 48; i < 51; i++)
	{
		for (int j = 48; j < 52; j++)
		{
			for (int k = 48; k < 54; k++)
			{
				for (int l = 48; l < 58; l++)
				{
					_putchar(i);
					if (j == 6)
						_putchar(48);
					else
						_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(l);
					_putchar('\n');
				}
			}
		}
	}
}
