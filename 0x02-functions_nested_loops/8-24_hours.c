#include "main.h"
/**
 * jack_bauer - Contains full body of the function
 *
 * Description: Print all the minutes in 24 hours Jack Bauer style
 * Return: void, has no return value
 */
void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 48; i < 51; i++)
	{
		for (j = 48; j < 58; j++)
		{
			for (k = 48; k < 54; k++)
			{
				for (l = 48; l < 58; l++)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(l);
					_putchar('\n');
					if (i == 50 && j == 51 && k == 53 && l == 57)
						return;
				}
			}
		}
	}
}
