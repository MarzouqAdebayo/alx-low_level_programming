#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count = 0;

	while (count < 10)
	{
		printf("%d", count);
		count++;
	}
	putchar(10);
	return (0);
}

