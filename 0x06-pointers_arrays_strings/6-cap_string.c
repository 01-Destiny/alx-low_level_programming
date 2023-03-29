#include "main.h"

/**
 * separator - checks if character is a seperator
 * @c: character to be checked
 * Return: if seperator return 1. Otherwise return 0;
 */

int separator(char c)
{
	/*Delcaring condition switch*/
	switch (c)
	{
	case ' ':
	case '\t':
	case '\n':
	case ',':
	case ';':
	case '.':
	case '!':
	case '?':
	case '"':
	case '(':
	case ')':
	case '{':
	case '}':
		return (1);

	default:
		return (0);
	}

}

/**
 * cap_string - capitalizes chars after given deliminators
 * @s: string to uppercase
 * Return: returns modified string
 */

char *cap_string(char *s)
{
	int count, upper;

	upper = -32; /*value constant 32*/

	count = 0;

	while (s[count] != '\0')
	{
		if (s[count] >= 'a' && s[count] <= 'z')
		{
			if (s[count] == *s || separator(s[count - 1]))

				s[count] += upper;
		}
		count++;
	}
	return (s);
}
