#include "variadic_functions.h"

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
 * length - returns the length of a valid format
 * @format: string that contains format
 *
 * Return: the length of the format
*/

int length(const char *const format)
{
	int len, i;

	i = 0;
	len = 0;
	while (format && format[i])
	{
		if (check(format[i]) == 1)
			len++;
		i++;
	}
	return (len);
}

/**
 * print_all - Prints all text passed into a function
 * @format: string containing the print format
 *
 * Return: no return value
 */

void print_all(const char *const format, ...)
{
	int len = length(format), i, sep = 0;
	va_list args;

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
	va_end(args);
}
