#include "main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: string
 *
 * Return: no return
 */

void print_rev(char *s)
{
	int r = 0;

	while (r >= 0)
	{
		if (s[r] == '\0')
			break;
		r++;
	}
	for (r--; r >= 0; r--)
		_putchar(s[r]);
	_putchar('\n');
}
