#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: parameter
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int l = 0;

	while (*(s + l) != '\0')
		l++;
	return (l);
}
