#include "main.h"

/**
 * puts_half - function prints half of a string
 *
 * @str: string
 *
 * Return: no return
 */

void puts_half(char *str)
{
	int a = 0;
	int b = 0;

	while (str[a++])
		b++;
	a = (b / 2);
	if (b % 2)
		a++;
	for (; a < b; a++)
	{
		_putchar(*(str + a));
	}
	_putchar('\n');
}
