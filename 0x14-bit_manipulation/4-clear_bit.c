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
	unsigned int s;

	if (index > 63)
		return (-1);

	s = 1 << index;

	if (*n & s)
		*n ^= s;

	return (1);
}
