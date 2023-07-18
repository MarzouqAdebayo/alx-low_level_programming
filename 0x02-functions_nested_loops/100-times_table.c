#include "main.h"

void dummy(void);
/**
 * print_times_table - Contains full body of the function
 * @n: number of times to print
 *
 * Description: Print the times table from 0-n
 * Return: void, has no return value
 */
void print_times_table(int n)
{
	int i, j, multiplication, remainder;

	if (n > 15 || n < 0)
		return;
	for (i = 0; i < n + 1; i++)
	{
		for (j = 0; j < n + 1; j++)
		{
			multiplication = i * j;

			if (j != 0)
			{
				if (multiplication < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(48 + (multiplication));
				}
				else if (multiplication < 100)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(48 + (multiplication / 10));
					_putchar(48 + multiplication % 10);
				}
				else
				{
					_putchar(' ');
					_putchar(48 + (multiplication / 100));
					remainder = multiplication % 100;
					_putchar(48 + (remainder / 10));
					_putchar(48 + multiplication % 10);
				}
			}
			else
				_putchar(48);
			if (j != n)
				_putchar(',');
		}
		_putchar('\n');
	}
}

/**
 * dummy - dummy
 * Return: void
 */
void dummy(void)
{
}
