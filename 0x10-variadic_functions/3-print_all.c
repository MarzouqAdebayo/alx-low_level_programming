#include "variadic_functions.h"

/**
 * dummy - dummy function
 */

void dummy(void)
{
}

/**
 * check - check if format is valid
 * @c: character to be checked
 *
 * Return: 1 if valid and 0 otherwise
 */

int check(char c)
{
	if (c == 'c' || c == 'i' || c == 'f' || c == 's')
		return (1);
	return (0);
}

/**
 * print_all - Prints all text passed into a function
 * @format: string containing the print format
 *
 * Return: no return value
 */

void print_all(const char *const format, ...)
{
	int len, i, sep = 0;
	va_list args;

	len = 0;
	i = 0;
	while (format[i])
	{
		if (check(format[i]) == 1)
			len++;
		i++;
	}
	va_start(args, format);
	i = 0;
	len++;
	while (i < len)
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(args, int));
			sep = 0;
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			sep = 0;
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			sep = 0;
			break;
		case 's':
			printf("%s", va_arg(args, char *));
			sep = 0;
			break;
		default:
			sep = 1;
			break;
		}
		if (sep == 0 && i < len - 1)
			printf(", ");
		i++;
	}
	printf("\n");
}
