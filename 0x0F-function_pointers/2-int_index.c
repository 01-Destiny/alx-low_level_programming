#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: array
 *
 * @size: number of elements in the array
 *
 * @cmp: pointer
 *
 * Return: not always 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (a = 0; a < size; a++)
			if (cmp(array[a]))
				return (a);
	}
	return (-1);
}
