#include "main.h"

/**
 * clear_bit - ...
 * @n: ...
 * @index: ...
 *
 * Return: 1 (success) or -1 (fail)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;

	if (index > 63)
		return (-1);

	x = 1 << index;

	if (*n & x)
		*n ^= x;

	return (1);
}
