#include "variadic_functions.h"

/**
 * length - returns the length of a valid format
 * @format: string that contains format
 *
 * Return: the length of the format
 */

int length(const char *const format)
{
	int len, i;
	char c;

	i = 0;
	len = 0;
	while (format && format[i])
	{
		c = format[i];
		if (c == 'c' || c == 'i' || c == 'f' || c == 's')
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
	while (format && format[i])
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
