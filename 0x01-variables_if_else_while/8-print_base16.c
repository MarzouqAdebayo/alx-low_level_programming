#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count = 48, charcount = 0;

	while (charcount < 16)
	{
		if (count == 58)
		{
			count = 97;
		}
		putchar(count);
		count++;
		charcount++;
	}
	putchar(10);
	return (0);
}

