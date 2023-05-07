#include <unistd.h>

/**
 * _putchar - writes the character c to std out
 *
 * @c: the character to print
 *
 * Return: not always 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
