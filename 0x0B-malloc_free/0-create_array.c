#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: function parameter
 * @c: function parameter
 * Return: not always 0
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i = 0;

	a = malloc(size * sizeof(char));

	if (a == NULL)
		return (NULL);

	if (size == 0)
		return (NULL);

	while (i < size)
	{
		a[i] = c;
		i++;
	}
	return (a);
}
