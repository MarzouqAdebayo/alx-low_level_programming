#include "main.h"
/**
 * times_table - Contains full body of the function
 *
 * Description: Print the times table from 0-9
 * Return: void, has no return value
 */
void times_table(void)
{
	int i, j, multiplication;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			multiplication = i * j;

			if (j != 0)
			{
				if (multiplication < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(48 + (multiplication));
				} else
				{
					_putchar(' ');
					_putchar(48 + (multiplication / 10));
					_putchar(48 + multiplication % 10);
				}
			} else
				_putchar(48);
			if (j != 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}

