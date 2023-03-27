#include "main.h"

/**
 * _puts - prints a string
 *
 * @str: string
 *
 * Return: no return
 */

void _puts(char *str)
{
	int s = 0;

	while (s >= 0)
	{
		if (str[s] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[s]);
		s++;
	}
}
