#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of an array
 *
 * @array: array
 *
 * @size: size of the array
 *
 * @action: pointer
 *
 * Return: no return
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array && action)
		for (a = 0; a < size; a++)
			action(array[a]);
}
