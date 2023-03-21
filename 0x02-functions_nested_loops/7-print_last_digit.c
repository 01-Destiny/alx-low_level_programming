#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @t: function parameter
 *
 * Return: always x
 */

int print_last_digit(int t)
{
	int x;

	x = t % 10;
	if (t < 0)
		x = -x;
	_putchar(x + '0');
	return (x);
}
