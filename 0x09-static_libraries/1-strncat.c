#include "main.h"

/**
 *_strncat - main function
 *@dest: string destination
 *@src: string source
 *@n: integer parameter
 *Return: returns new string
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
