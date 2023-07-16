#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 97;

	for (;a < 97+26; a++)
		putchar(a);
	putchar('\n');
}
