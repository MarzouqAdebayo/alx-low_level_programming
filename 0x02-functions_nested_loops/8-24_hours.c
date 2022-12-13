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
					putchar(i);
					if (j == 6)
						putchar(48);
					else
						putchar(j);
					putchar(':');
					putchar(k);
					putchar(l);
					putchar('\n');
				}
			}
		}
	}
}
