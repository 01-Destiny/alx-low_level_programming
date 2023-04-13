#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 *
 * @min: minimum value
 *
 * @max: maximum value
 *
 * Return: not always 0
 */

int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(*p) * ((max - min) + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
		p[i] = min;
	return (p);
}
