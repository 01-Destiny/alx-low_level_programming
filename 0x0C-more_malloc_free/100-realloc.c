#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates rea memory block
 *
 * @ptr: pointer
 *
 * @old_size: bytes size
 *
 * @new_size: new bytes size
 *
 * Return: no return
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		ptr = malloc(new_size);
	if (new_size == old_size)
		return (ptr);
	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}
