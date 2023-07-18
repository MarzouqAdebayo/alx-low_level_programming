#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0, count = 97;

	for (i = 0; i < 10; i++)
	{
		while (count < 97 + 26)
		{
			putchar(count);
			count++;
		}
		putchar(10);
		count = 97;
	}
	return (0);
}

