#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: string 1
 *
 * @s2: string 2
 *
 * @n: number of bytes
 *
 * Return: not always 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i1, i2, i3, i;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	for (i1 = 0; s1[i1] != '\0'; i1++)
		;
	for (i2 = 0; s2[i2] != '\0'; i2++)
		;
	if (n > i2)
		n = i2;
	i3 = i1 + n;
	p = malloc(i3 + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < i3; i++)
		if (i < i1)
			p[i] = s1[i];
		else
			p[i] = s2[i - i1];
	p[i] = '\0';
	return (p);
}
