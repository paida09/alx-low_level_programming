#include "main.h"

/**
 * get_bit - ...
 * @n: ...
 * @index: ...
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int len;

	if (index > 63)
		return (-1);

	len = (n >> index) & 1;

	return (len);
}
