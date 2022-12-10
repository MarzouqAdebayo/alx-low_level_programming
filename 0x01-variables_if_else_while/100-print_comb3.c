#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n1 = 0, n2 = 0;

	while (n1 < 10)
	{
		while (n2 < 10)
		{
			if (n1 == n2 || n2 < n1)
			{
				n2++;
				continue;
			}
			putchar(48 + n1);
			putchar(48 + n2);
			if (n1 != 9 || n2 != 9)
			{
				putchar(44);
				putchar(32);
			}
			n2++;
		}
		n1++;
		n2 = 0;
	}
	return (0);
}
