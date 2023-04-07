#include "main.h"

/**
 *_islower - checks for lowercase
 *@c: function parameter
 *Return: return 0 or 1
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);
	return (0);
}
