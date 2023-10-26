#include "main.h"

/**
 * set_bit - ...
 * @n: pointer of an unsigned long int.
 * @index: ...
 *
 * Return: 1 success, -1 fail.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;

	if (index > 63)
		return (-1);

	x = 1 << index;
	*n = (*n | x);

	return (1);
}
