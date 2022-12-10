#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count = 97;

	while (count < 97 + 26)
	{
		if (count != 101 && count != 113)
		{
			putchar(count);
		};
		count++;
	}
	putchar(10);
	return (0);
}
