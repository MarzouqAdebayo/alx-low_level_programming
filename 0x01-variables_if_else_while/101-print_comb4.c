#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n1, n2, n3;

	for (n1 = 48; n1 < 58; n1++)
	{
		for (n2 = 48; n2 < 58; n2++)
		{
			for (n3 = 48; n3 < 58; n3++)
			{
				if (n1 == n2 || n2 == n3)
					continue;
				else if (n3 < n2 || n2 < n3)
					continue;
				putchar(n1);
				putchar(n2);
				putchar(n3);
				if (n1 != 55)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
