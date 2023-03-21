#include "main.h"

/**
 * times_table - prints the 9 times table starting from 0
 *
 * Return: always 0
 */

void times_table(void)
{
	int a;
	int b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			int prod = a * b;

			if (b == 0)
			{
				_putchar('0');
			}
			else if (prod <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(prod + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(prod / 10 + '0');
				_putchar(prod % 10 + '0');
			}
			_putchar('\n');
		}
	}
}
