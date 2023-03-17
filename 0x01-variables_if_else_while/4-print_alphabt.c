#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	char u;

	for (u = 'a'; u <= 'z'; u++)
	{
		if  (u != 'q' && u != 'e')
			putchar(u);
	}
	putchar('\n');
	return (0);
}
