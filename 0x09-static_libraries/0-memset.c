#include "main.h"

/**
 *_memset - main function
 *@s: pointer
 *@b: char parameter
 *@n: unsigned int parameter
 *Return: returns new value of target
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
