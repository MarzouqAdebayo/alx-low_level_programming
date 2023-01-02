#include "main.h"

/**
 * print_chessboard - prints a chessboard to stdout
 * @a: pointer to the chars
 *
 * Return: no return value
 */

char print_chessboard(char (*a)[8])
{
	unsigned int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_puchar('\n');
	}
}
