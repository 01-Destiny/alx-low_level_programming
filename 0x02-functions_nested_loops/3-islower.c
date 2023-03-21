#include "main.h"

/**
 * _islower - checks for lower case character
 *
 * @c: parameter to be printed
 *
 * Return: 1 if its aits it's a lower case and 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
