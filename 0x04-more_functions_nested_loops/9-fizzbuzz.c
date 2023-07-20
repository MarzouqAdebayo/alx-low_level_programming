#include <stdio.h>
/**
 * main - Body of the function
 *
 * Description: prints the fizzbuzz challenge for numbers between 1 - 100
 * Return: 0 if successful
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else
			printf("%d", i);
		if (i < 100)
			putchar(' ');
	}
	putchar('\n');
	return (0);
}

