#include "main.h"

/**
 * _atoi - converts a string toto an integer
 *
 * @s: string
 *
 * Return: int
 */

int _atoi(char *s)
{
	int i = 0, j, n = 0, y = 1;

	while ((s[i] < '0' || s[i] > '9') && (s[i] != '\0'))
	{
		if (s[i] == '-')
			y *= -1;
		i++;
	}
	j = i;
	while ((s[j] >= '0') && (s[j] <= '9'))
	{
		n = (n * 10) + y * ((s[j]) - '0');
		j++;
	}
	return (n);
}
