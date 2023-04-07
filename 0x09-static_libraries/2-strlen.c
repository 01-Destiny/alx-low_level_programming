#include "main.h"

/**
 *_strlen - returns the length of a string
 * @s: string
 *Return: returns length
 */

int _strlen(char *s)
{
	int c, i;

	i = 0;
	for (c = 0; s[c] != '\0'; c++)
		i++;
	return (i);
}
