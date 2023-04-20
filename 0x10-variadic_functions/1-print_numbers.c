#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 *
 * @separator: string to be printed
 *
 * @n: number of integers
 *
 * Return: no return
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int p;

	va_start(valist, n);
	for (p = 0; p < n; p++)
	{
		printf("%d", va_arg(valist, int));
		if (separator && p < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
