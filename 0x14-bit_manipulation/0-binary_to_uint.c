#include "main.h"

/**
 * binary_to_uint - ...
 * @b: ...
 *
 * Return: ...
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int binary;
	int x, base_two;

	if (!b)
		return (0);

	binary = 0;

	for (x = 0; b[x] != '\0'; x++)
		;

	for (x--, base_two = 1; x >= 0; x--, base_two *= 2)
	{
		if (b[x] != '0' && b[x] != '1')
		{
			return (0);
		}

		if (b[x] & 1)
		{
			binary += base_two;
		}
	}

	return (binary);
}
