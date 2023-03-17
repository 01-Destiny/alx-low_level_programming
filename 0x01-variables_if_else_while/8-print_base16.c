#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	int y;
	char p;

	for (y = 0; y <= 9; y++)
		putchar(y + '0');
	for (p = 'a'; p <= 'f'; p++)
		putchar(p);
	putchar('\n');
	return (0);
}
