#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - Print the sum of two diagonals of square matrix
  *
  * @a: input
  * @size: input
  *
  * Return: 0.
  */
void print_diagsums(int *a, int size)
{
	int c, sum1 = 0, sum2 = 0;

	for (c = 0; c < size; c++)
	{
		sum1 += a[(size + 1) * c];
		sum2 += a[(size - 1) * (c + 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
