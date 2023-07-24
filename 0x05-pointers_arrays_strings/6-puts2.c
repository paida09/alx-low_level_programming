#include "main.h"

/**
  * puts2 - Prints every other character of a string
  * @str: The string to be treated
  *
  * Return: print
  */

void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		else
			continue;
	}

	_putchar('\n');
}
