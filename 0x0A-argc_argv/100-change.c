#include <stdio.h>
#include <stdlib.h>

/**
 * change - recursive function to perform change check
 * @remainder: remainder of money
 * @i: index of change value
 * @qty: quantity of change
 *
 * Return: int, quanity of change
 */

int change(int remainder, int i, int qty)
{
	int change_arr[] = {25, 10, 5, 2, 1};

	if ((remainder / change_arr[i]) < 1)
		return (change(remainder, i + 1, qty));
	if (remainder % change_arr[i] == 0)
	{
		if (change_arr[i] != 1)
			qty += remainder / change_arr[i];
		else if (change_arr[i] == 1)
			qty += remainder;
		return (qty);
	}
	else
	{
		qty += remainder / change_arr[i];
		return (change(remainder % change_arr[i], i + 1, qty));
	}
	return (qty);
}

/**
 * main - prints the minimun number of coins to make change for a given amount
 * @argc: number of arguments
 * @argv: argument vectors - pointer to the arguments
 *
 * Return: 0 if no errors else, 1
 */

int main(int argc, char *argv[])
{
	int j, money = atoi(argv[1]);
	int chg = 0;

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}

	if (money < 1)
	{
		puts("0");
		return (0);
	}

	for (j = 0; argv[1][j]; j++)
	{
		if (argv[1][j] >= '0' && argv[1][j] <= '9')
			continue;
		puts("Error");
		return (1);
	}

	chg = change(money, 0, chg);
	printf("%d\n", chg);
	return (0);
}

