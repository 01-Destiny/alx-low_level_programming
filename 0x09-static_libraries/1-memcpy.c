#include "main.h"

/**
 *_memcpy - main function
 *@dest: bytes destination
 *@src: bytes source
 *@n: amount of bytes to copy
 *Return: returns a pointer to n
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
