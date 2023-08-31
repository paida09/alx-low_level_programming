#include "main.h"

/**
 * flip_bits - ...
 * @n: 1st num
 * @m: 2nd num
 *
 * Return: num of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int execlusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = execlusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
