#include "main.h"

/**
 *_strpbrk - main function
 *@s: string
 *@accept: pointer
 *Return: always 0
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
				return (s);
		}
		s++;
	}
	return ('\0');
}
