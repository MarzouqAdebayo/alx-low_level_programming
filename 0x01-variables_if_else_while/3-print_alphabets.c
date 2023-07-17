#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count = 97, count2 = 65;

	while (count < 97 + 26)
	{
		putchar(count);
		count++;
	};
	while (count2 < 65 + 26)
	{
		putchar(count2);
		count2++;
	}
	putchar(10);
	return (0);
}
