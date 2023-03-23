#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: function parameter
 * Return: no return
 */

void print_diagonal(int n)
{
	int d;
	int b;

	for (d = 0; d < n; d++)
	{
		for (b = 0; b < d; b++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (d < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
