#include "main.h"

int  actual_sqrt_recursion(int n, int i);

/**
  * _sqrt_recursion - Returns the natural square root of a number
  * @n: number to calculate the natural square root
  *
  * Return: the natural square root
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
  * actual_sqrt_recursion - Calculates natural square root
  * @n: number to calculate the square root
  * @i: iterate number
  *
  * Return: the natural square root
  */
int actual_sqrt_recursion(int n, int i)
{

	if (i * i > n)
		return (-1);

	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
