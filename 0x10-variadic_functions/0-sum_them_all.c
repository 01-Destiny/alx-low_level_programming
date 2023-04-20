#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameter
 *
 * @n: parameter
 *
 * Return: always 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int s;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(valist, n);
	for (s = 0; s < n; s++)
		sum += va_arg(valist, int);
	va_end(valist);
	return (sum);
}
