#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k, l;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			for (k = 48; k < 58; k++)
			{
				for (l = 48; l < 58; l++)
				{
					if (k < i || (k == i && l == j) || (k == l && k < j))
						continue;
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (i == 57 && j == 56)
					{
						putchar('\n');
						return (0);
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
