#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 (big), 1 (little)
 */
int get_endianness(void)
{
	unsigned int i;
	char *c;

	i = 1;
	c = (char *) &i;

	return ((int)*c);
}
