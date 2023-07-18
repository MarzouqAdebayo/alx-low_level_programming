#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 0, b = 0;

	while (a < 10)
	{
		while (b < 10)
		{
			if (b == a || b < a)
			{
				b++;
				continue;
			}
			putchar(a + 48);
			putchar(b + 48);
			if (a != 8 || b != 9)
			{
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		a++;
		b = 0;
	}
	putchar('\n');
	return (0);
}
