#include "main.h"
#include <stdlib.h>
/**
 * _strdup - a function that returns a pointer
 *           to a newly allocated
 * @str: an input pointer of the string to copy.
 * Return: a pointer to new string or NULL if it str is NULL
 */

char *_strdup(char *str)
{
	char *new_str, *start;
	int i = 0, len = 0;

	if (str == NULL)
		return (NULL);

	start = str;

	while (*str)
	{
		len++;
		str++;
	}

	str = start;
	new_str = malloc(sizeof(char) * (len + 1));
	start = new_str;

	if (new_str != NULL)
	{
		for (; i < len; i++)
		{
			new_str[i] = *str;
			str++;
		}
		new_str[i] = '\0';
		return (start);
	}
	else
		return (NULL);
}
