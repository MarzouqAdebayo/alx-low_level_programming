#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count = 48;

	while (count < 58)
	{
		putchar(count);
		if (count != 57)
		{
			putchar(44);
			putchar(32);
		};
		count++;
	}
	putchar(10);
	return (0);
}

