#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 *
 * @n: int value
 *
 * @index: index of the bit
 *
 * Return: not always 0
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int b;

	if (n == 0 && index < 64)
		return (0);
	for (b = 0; b <= 63; n >>= 1, b++)
	{
		if (index == b)
		{
			return (n & 1);
		}
	}
	return (-1);
}
