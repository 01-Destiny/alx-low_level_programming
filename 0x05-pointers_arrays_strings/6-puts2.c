#include "main.h"

/**
 * puts2 - prints every other character of a string
 *
 * @str: string
 *
 * Return: no return
 */

void puts2(char *str)
{
	int u = 0;
	int w = 0;

	while (str[u++])
	{
		w++;
	}
	for (u = 0; u < w; u += 2)
	{
		_putchar(*(str + u));
	}
	_putchar('\n');
}
