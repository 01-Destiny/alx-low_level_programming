#include "main.h"

/**
 * rev_string - function that reverses a string
 *
 * @s: string
 *
 * Return: no return
 */

void rev_string(char *s)
{
	int a, b;
	char rev[500];

	a = 0;
	b = 0;
	while (*(s + a))
	{
		*(rev + a) = *(s + a);
		a++;
	}
	a = a - 1;
	while (a >= 0)
	{
		*(s + a) = *(rev + b);
		b++;
		a--;
	}
}
