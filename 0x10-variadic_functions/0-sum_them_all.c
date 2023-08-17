#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Sum of all its paramters passed.
 * @n: The number of arguments passed to sum.
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list them;
	unsigned int i, sum = 0;

	va_start(them, n);

	for (i = 0; i < n; i++)
		sum += va_arg(them, int);

	va_end(them);

	return (sum);
}
