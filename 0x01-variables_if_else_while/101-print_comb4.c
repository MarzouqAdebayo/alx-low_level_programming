#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 0, b = 0, c = 0;

	while (a < 10)
	{
		while (b < 10)
		{
			if (a == b || b < a)
			{
				b++;
				continue;
			}
			while (c < 10)
			{
				if (a == c || b == c || c < b)
				{
					c++;
					continue;
				}
				putchar(a + 48);
				putchar(b + 48);
				putchar(c + 48);
				if (a != 7 || b != 8 || c != 9)
				{
					putchar(',');
					putchar(' ');
				}
				c++;
			}
			b++;
			c = 0;
		}
		a++;
		b = 0;
	}
	putchar('\n');
	return (0);
}
