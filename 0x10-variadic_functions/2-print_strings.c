#include "variadic_functions.h"

/**
 * print_strings - prints strings
 *
 * @separator: string to be printed
 *
 * @n: number of strings
 *
 * Return: no return
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int p;
	char *string;

	va_start(valist, n);
	for (p = 0; p < n; p++)
	{
		string = va_arg(valist, char *);
		if (string)
			printf("%s", string);
		else
			printf("(nil)");
		if (p < n - 1)
			if (separator)
				printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
